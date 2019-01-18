#include <iostream>
#include<vector>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	vector<string> vs;
	string s;
	while (cin >> s)
		vs.push_back(s);
	for (string &s_temp : vs)
		for (char &c : s_temp)
			c = toupper(c);
	for (string s_temp : vs)
		cout << s_temp << endl;

	return 0;
}
