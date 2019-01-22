#include <iostream>
#include<iterator>
#include <cstring>
using namespace std;

int main()
{
	char s1[20] = "hello,";
	char s2[20] = "my dear";
	char s3[20];
	strcat_s(s1, s2);
	strcpy_s(s3, s1);
	cout << s3 << endl; 
	return 0;
}
