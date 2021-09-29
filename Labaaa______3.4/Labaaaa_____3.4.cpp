// Lab_03_4.cpp
// < Мриглоцька Ярина >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 6
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	 if (y >= sqrt((R * R) - (x + R) * (x + R)) + R && x < 0  ||
		(y <= sqrt((R * R) - (x - R) * (x - R)) && y >= 0))
		cout << "yes" << endl;
	else 
		cout << "no" << endl;
	cin.get();
	return 0;
}