#include <iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vi;
	int i;
	while(cin >> i)
	{
		vi.push_back(i);
	}
	for (int k : vi)
		cout << k << " ";
	cout << endl;
	
	return 0;
}
