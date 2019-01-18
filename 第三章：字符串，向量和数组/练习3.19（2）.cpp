#include <iostream>
#include<vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	vector<int> vi;
	int i;
	while (cin >> i)
		vi.push_back(i);
	for (int i = 0; i < vi.size()/2; i++)
		cout << vi[i] + vi[vi.size() - 1 - i] << endl;
	if (vi.size() / 2 != 0)
		cout << vi[vi.size() / 2] * 2 << endl;
	
	return 0;
}
