#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int j, i, n = 26;
	double u, y;
	double* x = new double[3];
	x[0] = -0.7;
	x[1] =-1.6;
	x[2] = 3.5;
	for (i = 0; i < 3; i++)
	{
		if (x[i] < 0)
			y = sin(x[i] + 1);
		else
			y = sin(x[i] + 1) * sin(x[i] + 1);
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