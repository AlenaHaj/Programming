#include <iostream>
using namespace std;
int main()
{
	//Эта программа лишь набросок,для того чтобы сделать основную программу.Потом просто сделаю ctrl+C, ctrl+V
	setlocale(LC_ALL, "Russian");
	int n, i, f = 1;
	cout << "Введите n" << endl;
	cin >> n;
	for (i = 2; i <= n; i++) { //Если добавить n*2+1, то будет правильно работать вторая функция
		f *= i;
	}
	cout << "Факториал n=" << f;

	//вторая функция
	int x;
	cin >> x;
	double s = x;
	for (i = 2; i <= n; i++) {
		s = s + pow(-1, n) * (pow(x, (2 * n + 1)) / (f));
	}
	cout << s;



	//третья функция
	double C = 0;
	int k, f2 = 1, f3 = 1;
	cin >> k;
	for (i = 1; i <= k; i++) {
		f2 *= i;
	}
	for (i = 1; i <= abs(n - k); i++) {
		f3 *= i;
	}
	if (n - k < 0) {
		f3 *= (-1);
		C = f / (f2 * f3);
	}
	else
		C = f / (f2 * f3);

}
