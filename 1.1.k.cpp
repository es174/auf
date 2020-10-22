#include <iostream>
#include <cmath>
using namespace std;
void create(int* x, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "x[" << i << "] =";
		cin >> x[i];
	}
}
void show(int* x, int n)
{
	for (int i = 0; i < n; i++)
		cout << "x[" << i << "] = " << x[i] << endl;
}
int main()
{
	int  n, i;
	double t, x, b, j, odin, dva, h, F;
	cout << "Vvedite a1, a2, a3: " << endl;
	double* a = new double[3];
	for (i = 0; i < 3; i++)
	{
		cout << "a[" << i + 1 << "] =";
		cin >> a[i];
	}
	cout << "Vvedite b: ";
	cin >> b;
	cout << "Vvedite h: ";
	cin >> h;
	cout << "Vvedite n: ";
	cin >> n;
	for (i = 0; i < 3; i++)
	{
		odin = 1.0;
		dva = 0.0;
		for (j = 1; j <= n; j++)
		{
			x = b + j * h;
			F = 0.8 + 2 * sin(x) - 5.5 * sin(a[i]) * sin(a[i]);
		odin = odin * F;
		if (abs(F) > dva)
			dva = abs(F);
		}
		cout << "Chislo odin a[" << i << "] = " << abs(odin) << endl << "Chislo dva a[" << i << "] = " <<  dva << endl;
	}
	return 0;
	system("pause");
}