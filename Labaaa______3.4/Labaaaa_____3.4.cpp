// Lab_03_4.cpp
// < ���������� ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 6
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����
	 if (y >= sqrt((R * R) - (x + R) * (x + R)) + R && x < 0  ||
		(y <= sqrt((R * R) - (x - R) * (x - R)) && y >= 0))
		cout << "yes" << endl;
	else 
		cout << "no" << endl;
	cin.get();
	return 0;
}