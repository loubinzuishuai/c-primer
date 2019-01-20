#include <iostream>
#include<vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	vector<int> pool;
	int i;
	while (cin >> i)
		pool.push_back(i);
	auto left = pool.begin();
	auto right = pool.end()-1;
	while (left <= right)
	{
		cout << *left + *right << endl;
		left++;
		right--;
	}
	return 0;
}
