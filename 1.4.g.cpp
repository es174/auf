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
	int j, i, n = 23;
	double u, y;
	double* x = new double[3];
	x[0] = -0.4;
	x[1] =2.4;
	x[2] = 5;
	for (i = 0; i <3; i++)
	{
		y = 3.5 * sin(x[i]) * sin(x[i]) - 2.7 * sin(x[i]) + 1;
		u = 1;
		for (j = 0; j < n + 1; j++)
		{
			u = 2 * u / 3 + y / (3 * u * u);
		}
		cout << u << endl;
	}
	
	return 0;
	system("pause");
}