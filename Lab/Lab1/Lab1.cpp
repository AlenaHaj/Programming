#include <iostream>
#include "cpp_httplib/httplib.h"
#include "nlohmann/json.hpp"
#include <fstream>
#include <string>
#include <locale>

using namespace httplib;
using namespace std;
using json = nlohmann::json;

int times = 0;
json weather_data;

int Search_Weather_Data(int times) {
    if (weather_data.is_null())
    {
        return -1;
    }

    int idx = -1;

    for (int i = 0; i < weather_data["hourly"].size(); i++) {
        if (times <= weather_data["hourly"][i]["dt"].get<int>())
        {
            idx = i;
            break;
        }
    }
    return idx;
}

bool Time_Server_Read() {

    Client server("http://worldtimeapi.org");
    auto result = server.Get("/api/timezone/Europe/Simferopol");

    if (result) {
        if (result->status == 200)
        {
            json worldtime;
            worldtime = json::parse(result->body);
            times = worldtime["unixtime"].get<int>();
            return true;
        }
        else
        {
            cout << "Error time server." << result->status << endl;
        }
    }
    else
    {
        auto err = result.error();
        cout << "Error code: " << err << endl;
    }
    return false;
}

bool Weather_Server_Read() {
    Client server("http://api.openweathermap.org");
    auto result = server.Get("/data/2.5/onecall?lat=44.9572&lon=34.1108&lang=ru&units=metric&exclude=current,minutely,daily,alerts&appid= !!! ");

    if (result) {
        if (result->status == 200)
        {
            times = json::parse(result->body);
            return true;
        }
        else
        {
            std::cout << "Error time server." << result->status << endl;
        }
    }
    else
    {
        auto err = result.error();
        std::cout << "Error code: " << err << endl;
    }
    return false;
}

bool raw(const Request& req, Response& res) {

    int now = Time_Server_Read();
    if (!now)
    {
        return false;
    }

    int idx = Search_Weather_Data(times);
    if (idx == -1)
    {
        if (!Weather_Server_Read())
        {
            return false;
        }

        idx = Search_Weather_Data(times);

        if (idx == -1)
        {
            return false;
        }
    }
    json send_res;

    send_res = weather_data["hourly"][idx]["weather"][0];

    send_res.push_back({ "temp", weather_data["hourly"][idx]["temp"].get<int>() });

    res.set_content(send_res.dump(4), "text/plain");

    return true;
}

bool root(const Request& req, Response& res) {
    int now = Time_Server_Read();
    if (!now)
    {
        return false;
    }

    int idx = Search_Weather_Data(times);
    if (idx == -1)
    {
        if (!Weather_Server_Read())
        {
            return false;
        }

        idx = Search_Weather_Data(times);

        if (idx == -1)
        {
            return false;
        }
    }

    ifstream VIJET("iframe.html");
    string vijet;

    if (VIJET.is_open())
    {
        getline(VIJET, vijet, '\0');
        VIJET.close();
    }
    else
    {
        return false;
    }

    string mask = "{hourly[i].temp}";
    size_t found = vijet.find(mask);

    if (found != string::npos)
    {
        vijet.replace(found, mask.size(), std::to_string(weather_data["hourly"][idx]["temp"].get<int>()));
    }

    mask = "{hourly[i].weather[0].icon}";
    found = vijet.find(mask);

    if (found != string::npos)
    {
        vijet.replace(found, mask.size(), weather_data["hourly"][idx]["weather"][0]["icon"].get<string>());
    }

    mask = "{hourly[i].weather[0].description}";
    found = vijet.find(mask);

    if (found != string::npos)
    {
        vijet.replace(found, mask.size(), weather_data["hourly"][idx]["weather"][0]["description"].get<string>());
    }

    res.set_content(vijet, "text/html");

    return true;
}


int main() {
    setlocale(LC_ALL, "Russian");

    Server server;
    server.Get("/raw", raw);
    server.Get("/", root);

    std::cout << "запуск сервера\n";

    server.listen("localhost", 3000);
    return 0;
}