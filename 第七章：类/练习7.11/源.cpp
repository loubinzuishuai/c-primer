#include<iostream>
#include<string>
#include "Sales_data.h"
using namespace std;

int main(int argc, char *argv[])
{
	Sales_data s1;
	Sales_data s2("了不起的盖茨比");
	Sales_data s3("流浪地球", 20, 812);
	Sales_data s4(cin);
	s1.print(cout);
	cout << endl;
	s2.print(cout);
	cout << endl;
	s3.print(cout);
	cout << endl;
	s4.print(cout);
	cout << endl;
	while (1) {}
}

 