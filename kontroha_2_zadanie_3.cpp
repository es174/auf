#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i, n, c;
	double x;
	bool t;
	x = 0;
	c = 0;
	t = false;
		cin >> n;
	int* a = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] %2!= 0)
		t = true;
	}
	if (t)
	{
		for (i = 0; i < n; i++)

			if (a[i] % 2 != 0)
			{
				x = x + a[i];
				c++;
			}
		x = x / c;
		cout.precision(3);
		cout << x;
		}
	
	else
		cout << "NO";
}