//Дана последовательность натуральных чисел 1, 2, 3, ..., N (1 ≤  N ≤ 1000). 
//Необходимо сначала расположить в обратном порядке часть этой последовательности от элемента с номером A до элемента с номером B, 
//а затем от C до D (A < B; C < D; 1 ≤  A, B, C, D ≤ N).
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
	int n, a, b, c, d, i, y, x;
	cout << "Vvedite N = ";
	cin >> n;
	cout << "Vvedite A = ";
	cin >> a;
	cout << "Vvedite B = ";
	cin >> b;
	cout << "Vvedite C = ";
	cin >> c;
	cout << "Vvedite D = ";
	cin >> d;
	for (i = 1; i < a; i++)
		cout << i << " ";
	if (c>b)
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
	for (i; i<=n; i++)
		cout << i << " ";
	}
	else
	{
		y = b+1;
		i = a;
		while (b >= c)
		{
			cout << b << " ";
			b--;
		}
		x = d+1;
		while (d >= y)
		{
			cout << d << " ";
			d--;
		}
		for (i; i<c; i++)
			cout << i << " ";
		for (x; x <= n; x++)
			cout << x << " ";
	}
	





		return 0;
		system("pause");
}
