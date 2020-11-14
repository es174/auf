#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, d, i;
	bool t;
	t = false;
	cin >> a >> b >> c >> d;
	for (i = 10000; i < 99999; i++)
	{
		if (i % a == b and i % c == d)
		{
			cout << i << " "; 
			t = true;
		}
	}
	if (!t)
		cout << "-1";
}
