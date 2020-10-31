#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  j, i,  n=17;
	double t, y, e=1.1;
	double* a = new double[n+1];
	a[0] = 3.18;
	double* b = new double[n + 1];
	b[0] = -5.60;
	for (i = 1; i < n+1; i++)
	{
		a[i] = sqrt(2 + sin(a[i - 1] + b[i - 1])) + sqrt(2 - cos(a[i - 1] + b[i - 1]));
			if (a[i - 1] < 0)
				b[i] = sin(a[i - 1] + b[i - 1]) * sin(a[i - 1] + b[i - 1]);
			else
				b[i] = sin(1 + a[i - 1] * b[i - 1] - b[i - 1] * b[i - 1]);
	}
	for (i = 1; i < n + 1; i++)
		for (j = 0; j <= n; j++)
		{
			if (sqrt(abs(a[j]-a[i])) < e)
			{
				cout << a[i] << endl;
				break;

			}


		}
	return 0;
	system("pause");
}