#include <iostream>
#include<iterator>
using namespace std;

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	auto abegin = begin(a);
	auto aend = end(a);
	for (auto p = abegin; p != aend; p++)
	{
		*p = 0;
	}
	for (auto p = abegin; p != aend; p++)
		cout << *p << " ";
	cout << endl;
	return 0;
}
