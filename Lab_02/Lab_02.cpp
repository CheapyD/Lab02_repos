// Lab_02.cpp
// < ������� ������ >
// ����������� ������ � 2.
// ˳����� ��������.
// ������ 6
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a; // ������� ��������
	// double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������

	cout << "a = "; cin >> a;

	// z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
	z2 = 4 * cos(a / 2) * cos((5. / 2) * a) * cos(4 * a);

	cout << endl;
	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	system("pause");
	return 0;
}