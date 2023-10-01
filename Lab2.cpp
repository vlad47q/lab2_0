// Lab_02.cpp
// Скоропад Владислав
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 11
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double z1, z2, alpha;

	cout << "Alpha = "; cin >> alpha;

	z1 = (1.0 - 2.0 * pow(sin(alpha), 2.0)) / (1.0 + sin(2.0 * alpha));
	z2 = (1.0 - tan(alpha)) / (1.0 + tan(alpha));

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}