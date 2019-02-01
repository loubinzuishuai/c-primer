#include<iostream>
using namespace std;
int max_(const int &a, const int *p)
{
	if (a >= *p)
		return a;
	else
		return *p;
}
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int c = max_(a, &b);
		cout << c << endl;
	}
	return 0;
}
