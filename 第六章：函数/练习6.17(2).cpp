#include<iostream>
#include<string>
#include<queue>
using namespace std;
void to_lower(string &s)
{
	for (char &c : s)
	{
		c = tolower(c);
	}
}
int main()
{
	string s;
	while (cin >> s)
	{
		to_lower(s);
		cout << s << endl;
	}
	return 0;
}
