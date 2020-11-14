#include <iostream>
#include <cmath>
using namespace std;
int main()
	{
		int n, a, b, c, d, i, y, x;
	cin >> n;
	cin >> a;
	cin >> b;
	cin >> c;
	
		cin >> d;
		for (i = 1; i < a; i++)
			cout << i << " ";
		if (c > b)
		{
			i = b + 1;
			while (b >= a)
			{
				cout << b << " ";
				b--;
			}
			for (i; i < c; i++)
				cout << i << " ";
			i = d + 1;
			while (d >= c)
			{
				cout << d << " ";
				d--;
			}
			for (i; i <= n; i++)
				cout << i << " ";
		}
		else
		{
			y = b + 1;
			i = a;
			while (b >= c)
			{
				cout << b << " ";
				b--;
			}
			x = d + 1;
			while (d >= y)
			{
				cout << d << " ";
				d--;
			}
			for (i; i < c; i++)
				cout << i << " ";
			for (x; x <= n; x++)
				cout << x << " ";
		}






		return 0;
		system("pause");
}