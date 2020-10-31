#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  n, i, r, j;
	double t, h, m, y;
	n = 35;
	long double* z = new long double[n];
	z[0] = -0.01;
	z[1] = 3.2;
	h = 0.8;
	m =9;
	for (i = 0; i < n; i++)
	{
		if (i > 1)
		{
			if (z[i - 1] < 0)
				z[i] = log(1 + z[i - 1] * z[i - 1] + z[i - 2] * z[i - 2]);
			else
				z[i] = log(1 + 2 * z[i - 1] + z[i - 2] * z[i - 2]);
		}
		r = 0;
		t = abs(z[i] - 2.5);
		for (j = 1; j <= m; j++)
		{
			if (t >= (j - 1) * h and t < j * h)
				r++;

		}
		cout << r << endl;
	}
	return 0;
	system("pause");
}