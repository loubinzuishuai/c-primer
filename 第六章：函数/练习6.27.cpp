#include<iostream>
#include <initializer_list>
#include<vector>
using namespace std;
int sum(initializer_list<int> li)
{
	int sum = 0;
	for (auto it = li.begin(); it != li.end(); it++)
		sum += *it;
	return sum;
}
int main(int argc, char *argv[])
{
	initializer_list<int> li = { 1,2,3,4,5 };
	int k = sum(li);
	cout << k << endl;
	return 0;
}
