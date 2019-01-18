#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	//比较字符串是否相等
	string s1, s2;
	cout << "请输入两个字符串，一行一个" << endl;
	getline(cin, s1);
	getline(cin, s2);
	if (s1 == s2) cout << "两个字符串相等" << endl;
	else if (s1 < s2) cout << s2 << endl;
	else cout << s1 << endl;
	*/


	//比较字符串长度是否相等
	string s1, s2;
	cout << "请输入两个字符串，一行一个" << endl;
	getline(cin, s1);
	getline(cin, s2);
	if (s1.size() == s2.size()) cout << "两个字符串相等" << endl;
	else if (s1.size() < s2.size()) cout << s2 << endl;
	else cout << s1 << endl;
	while (1) {};
}
