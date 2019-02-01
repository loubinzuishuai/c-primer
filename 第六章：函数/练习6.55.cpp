#include<iostream>
#include<string>
#include <vector>
using namespace std;
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a - b;
}
int multiply(int a, int b)
{
	return a*b;
}
int divide(int a, int b)
{
	return a / b;
}
int main(int argc, char *argv[])
{
	using p = int(*)(int, int);
	vector<p> ui;
	ui.push_back(&add);
	ui.push_back(&sub);
	ui.push_back(&multiply);
	ui.push_back(&divide);
	int a = 4, b = 2;
	for (p pi : ui)
	{
		int c = (*pi)(a, b);
		cout << c << endl;
	}
	return 0;	
}

 