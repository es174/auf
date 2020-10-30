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
	int  j, i,  n=13;
	double t, y, e=2.5;
	double* a = new double[n+1];
	a[0] = 1.5;
	double* b = new double[n + 1];
	b[0] = -0.14;
	for (i = 1; i < n+1; i++)
	{
		a[i] = (1 - a[i - 1]) / (1 + b[i - 1] * b[i - 1]) * sin(a[i - 1] * a[i - 1] + a[i - 1] * b[i - 1] + 2);
		b[i] = 0.8 + 2 * sin(b[i - 1]) - 5.5 * sin(a[i - 1]) * sin(a[i - 1]);
	}
	for (i = 1; i < n + 1; i++)
		for (j = 0; j <= n; j++)
		{
			if (abs(a[i]*a[i] + b[j]*b[j]) < e)
			{
				cout << a[i] << endl;
				break;

			}


		}
	return 0;
	system("pause");
}