#include<iostream>
#include<queue>
using namespace std;
int _abs(int i)
{
	return (i >= 0) ? i : -i;
}



int main()
{
	int i;
	while (cin >> i)
	{
		int k =  _abs(i);
		cout << k << endl;
	}
	return 0;
}
