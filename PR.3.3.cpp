// Lab_03_3.cpp
// < Шиманова Юлія >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 29
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double x; // вхідний аргумент
	double y; // результат обчислення функції

	cout << "x="; cin >> x;

	// розгалуження в повній формі
	if (-7 < x && x <= -3)
		y = x + 7;
	else if (-3 < x && x <= -2)
		y = 4;
	else if (-2 < x && x <= 2)
		y = x * x;
	else if (x > 2 && x < 4)
		y = -2 * x + 8;
	else
		y = 0;

	cout << "y=" << y << endl;

	cin.get();
	return 0;
}

