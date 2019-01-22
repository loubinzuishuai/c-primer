#include <iostream>
#include<iterator>
#include <string>
#include <stack>
#include <vector>
using namespace std;
const int maxn = 100;

int main()
{
	int a[] = { 1,2,3,4,5 };
	vector<int> vi(begin(a), end(a));
	for (auto it = vi.begin(); it != vi.end(); it++)
		cout << *it << endl;
	return 0;
}
