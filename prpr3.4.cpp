// Lab_03_4.cpp
// < Шиманова Юлія >
// // Лабораторна робота № 3.4
// // Розгалуження, задане плоскою фігурою.
// // Варіант 29
#include <iostream>
#include <cmath>


using namespace std;
int main()

{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // радіус кола

	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "R="; cin >> R;


	// розгалуження в повній формі

	if (y >= -sqrt(R * R - x * x) && y <= sqrt(R * R - x * x) && x >= 0 && y >= (x - 1) * (x - 1) || y >= -sqrt(R * R - x * x) && y <= sqrt(R * R - x * x) && x <= 0 && y <= 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}

// 1, 0, 5 yes
// 1, 0, 0 no