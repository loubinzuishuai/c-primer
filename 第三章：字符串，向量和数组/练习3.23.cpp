#include <iostream>
#include<vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	vector<int> pool;
	cout << "�������Ǹ�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		int k;
		cin >> k;
		pool.push_back(k);
	}
	for (auto it = pool.begin(); it != pool.end(); it++)
	{
		*it *= 2;
		cout << *it << " " << endl;
	}
	
	return 0;
}
