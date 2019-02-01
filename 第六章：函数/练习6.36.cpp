#include<iostream>
#include <string>
#include <vector>
using namespace std;
int(&produce_array(int (&a)[10]))[10]
{
	return a;
}
int main(int argc, char *argv[])
{
	int b[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int(&a)[10] = b;
	for (int i : a)
		cout << i << " ";
	cout << endl;
	return 0;
	
}
