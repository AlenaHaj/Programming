#include <iostream>
#include <string>
//Вообще не знаю кто такой Сигизмунд и почему я ему помогаю. Возможно если бы он пополнил мою коллецию билетов, то я бы быстро и качественно решила задачу
//Ну а если серьезно, то я просто не понимаю, что за ошибку выдает программа. В теории она мне кажется рабочей
int main()
{
	setlocale(LC_ALL, "Russian"); 
	int n, j; 
	std::cout << "n=";
	std::cin >> n;
	char a1 = 'a', a4 = '5', a5 = '5', a6 = '6', a7 = '6', a8 = '1';
	int i = 1;
	std::string b[1][10000];
	for (j = 0; j < n; j++);
	{
		std::cin >> b[i][j];
	}
	for (j = 0; j < n; j++);
	{
		if (b[i][j].at(0)==a1 and b[i][j].at(4)==a4 and b[i][j].at(5)==a5 and b[i][j].at(6)==a6 and b[i][j].at(7)==a7 and b[i][j].at(8)==a8)
		{
			std::cout << b[i][j];
		}
		else
		{
			std::cout << - 1;
		}
	}
	return 0;
}
