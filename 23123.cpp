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
	int n, t, j;
	cout << "Vvedite kol-vo elementov massiva:";
	cin >> n;
	j = 0;
	int* a = new int[n];
	create(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
			j++;
		}
	}
	cout << "Izmenennuu massiv:" << endl;
	show(a, n);
	return 0;
	system("pause");
}