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
	for (int i = 0; i < vi.size() - 1; i++)
		cout << vi[i] + vi[i + 1] << endl;
	
	return 0;
}
