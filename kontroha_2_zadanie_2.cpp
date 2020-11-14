#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	bool t;
	t = true;
	int x;
	cin >> x;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
		{
			t = false;
			break;
		}
	if (t)
		cout << "prime";
	else
		cout << "composite";
}