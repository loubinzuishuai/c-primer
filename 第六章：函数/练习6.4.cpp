#include<iostream>
#include<queue>
using namespace std;
int jiecheng(int i)
{
	int product = 1;
	for (int k = 2; k <= i; k++)
		product *= k;
	return product;
}



int main()
{
	int i;
	while (cin >> i)
	{
		int k = jiecheng(i);
		cout << k << endl;
	}
	return 0;
}
