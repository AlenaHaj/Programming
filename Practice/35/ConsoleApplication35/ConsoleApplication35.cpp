
#include <iostream>
#include <locale>
using namespace std;

struct IntArray {
    int* data;
    int size;
} arr;

void create(IntArray* arr, int size) {
    int* array = new int[size];
    (*arr).data = array;
    (*arr).size = size;
}

void create(IntArray& arr, int size) {
    int* array = new int[size];
    arr.data = array;
    arr.size = size;
}

int get(IntArray* arr, int index) {
    if ((index < 0) || (index >= (*arr).size)) {
        cout << "Ошибка";
        exit(-1);
    }
    return (*arr).data[index];
}

int get(IntArray& arr, int index) {
    if ((index < 0) || (index >= arr.size)) {
        cout << "Ошибка";
        exit(-1);
    }
    return arr.data[index];
}

void set(IntArray* arr, int index, int value) {
    if ((index < 0) || (index >= (*arr).size)) {
        cout << "Index error";
        exit(1);
    }
    (*arr).data[index] = value;
}

void set(IntArray& arr, int index, int value) {
    if ((index < 0) || (index >= arr.size)) {
        cout << "Index error ";
        exit(1);
    }
    set(&arr, index, value);
}

void print(IntArray* arr) {

    for (int i = 0; i < (*arr).size; i++)
    {
        if (i == 0) cout << "[";
        cout << (*arr).data[i];
        if (i != (*arr).size - 1)
        {
            cout << ", ";
        }
        else cout << "]" << endl;
    }
}

void print(IntArray& arr) {
    for (int i = 0; i < arr.size; i++)
    {
        if (i == 0) cout << "[";
        cout << arr.data[i];
        if (i != arr.size - 1)
        {
            cout << ", ";
        }
        else cout << "]" << endl;
    }
}

void resize(IntArray* arr, int newSize) {
    int* ald_arr = (*arr).data;
    int  ald_size = (*arr).size;
    create(arr, newSize);

    for (int i = 0; i < newSize; i++) {
        if (i < ald_size) {
            set(arr, i, ald_arr[i]);
        }
        else
        {
            set(arr, i, 0);
        }
    }

    delete[]ald_arr;
}

void resize(IntArray& arr, int newSize) {
    int* ald_arr = arr.data;
    int  ald_size = arr.size;
    create(arr, newSize);

    for (int i = 0; i < newSize; i++) {
        if (i < ald_size) {
            set(arr, i, ald_arr[i]);
        }
        else
        {
            set(arr, i, 0);
        }
    }

    delete[]ald_arr;
}

void destroy(IntArray* arr) {
    if ((*arr).data != nullptr) {
        delete[](*arr).data;
        (*arr).data = nullptr;
        (*arr).size = 0;
    }
}

void destroy(IntArray& arr) {
    if (arr.data != nullptr) {
        delete[] arr.data;
        arr.data = nullptr;
        arr.size = 0;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    create(arr, 30);
    for (int i = 0; i < 30; i++)
    {
        set(arr, i, i + 1);
    }
    print(arr);
    resize(arr, 50);
    print(arr);
    resize(arr, 10);
    print(arr);
    destroy(arr);
    return 0;
}
