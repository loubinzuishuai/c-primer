#include<iostream>
#include<string>
#include <vector>
using namespace std;
int f(int a, int b)
{
	return a+b;
}
int main(int argc, char *argv[])
{
	using p = int(*)(int, int);
	vector<p> ui;
	ui.push_back(&f);
	auto beg = ui.begin();
	cout << (*beg)(2, 3) << endl;
	while (1) {}
	return 0;	
}

 