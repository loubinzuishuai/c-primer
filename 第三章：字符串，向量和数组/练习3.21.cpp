#include <iostream>
#include<vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	vector<int> vi = { 1,2,3,4,5,6,7,8,9,5,6,45,53 };
	int number = 0;
	for (auto it = vi.cbegin(); it != vi.cend(); it++)
	{
		number++;
		cout << *it << endl;
	}
	cout << "ÈÝÁ¿Îª:" << number << endl;
	return 0;
}
