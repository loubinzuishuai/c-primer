#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	//将输入的字符串无缝连接
	string s = "", s1;
	while (cin >> s1)
		s += s1;
	cout << s << endl;
	return 0;
	*/

	//用空格连接输入的字符串
	string s = "", s1;
	while (cin >> s1)
		s = s + " " + s1;
	cout << s << endl;
	return 0;
}
