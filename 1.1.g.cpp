#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  n, i;
	double t, x, b, j, odin, dva, h, y;
	double* a = new double[3];
	a[0] = -0.04;
	a[1] = 2;
	a[2] = 1.96;
	b = -1;
	h = 0.05;
	n = 9;
	for (i = 0; i < 3; i++)
	{
		odin =99999999999;
		dva = -99999999999;
		for (j = 1; j <= n; j++)
		{
			x = b + j * h;
			if (a[i] < 0)
				y = log(1 + a[i] * a[i] + x * x);
			else
				y = log(1 + 2 * a[i] + x * x);
				if (y * y < odin)
					odin = y * y;
			if (y * y > dva)
				dva = y * y;
		}
		cout << "Chislo odin a[" << i << "] = " << abs(odin) << endl << "Chislo dva a[" << i << "] = " <<  dva << endl;
	}
	return 0;
	system("pause");
}