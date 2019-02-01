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
			cout << "º¬ÓÐ´óÐ´×ÖÄ¸" << endl;
		else
			cout << "²»º¬´óÐ´×ÖÄ¸" << endl;
	}
	return 0;
}
