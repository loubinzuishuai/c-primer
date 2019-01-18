#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s = "hello world";
	for (auto &c : s)
	{
		if (isalpha(c))
			c = 'x';
	}
	cout << s << endl;
	return 0;
}
