#include<iostream>
#include<string>
#include<queue>
using namespace std;
bool has_upper(const string &s)
{
	for (char c : s)
	{
		if (isupper(c))
			return true;
	}
	return false;
}
int main()
{
	string s;
	while (cin >> s)
	{
		bool b = has_upper(s);
		if (b)
			cout << "���д�д��ĸ" << endl;
		else
			cout << "������д��ĸ" << endl;
	}
	return 0;
}
