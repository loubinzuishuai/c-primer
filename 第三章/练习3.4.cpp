#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	//�Ƚ��ַ����Ƿ����
	string s1, s2;
	cout << "�����������ַ�����һ��һ��" << endl;
	getline(cin, s1);
	getline(cin, s2);
	if (s1 == s2) cout << "�����ַ������" << endl;
	else if (s1 < s2) cout << s2 << endl;
	else cout << s1 << endl;
	*/


	//�Ƚ��ַ��������Ƿ����
	string s1, s2;
	cout << "�����������ַ�����һ��һ��" << endl;
	getline(cin, s1);
	getline(cin, s2);
	if (s1.size() == s2.size()) cout << "�����ַ������" << endl;
	else if (s1.size() < s2.size()) cout << s2 << endl;
	else cout << s1 << endl;
	while (1) {};
}
