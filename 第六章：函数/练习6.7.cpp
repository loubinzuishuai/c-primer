#include<iostream>
#include<queue>
using namespace std;
int fun()
{
	static int count = 0;
	++count;
	if (count == 1) return 0;
	else return 1;
}



int main()
{
	int i; //i��ʾ���ô���
	while (cin >> i)
	{
		int k = fun();
		cout << k << endl;
	}
	return 0;
}
