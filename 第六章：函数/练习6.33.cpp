#include<iostream>
#include <string>
#include <vector>
using namespace std;
void print(vector<int> &vi, vector<int>::iterator it)
{
	if (it != vi.end())
	{
		cout << *it << " ";
		++it;
		print(vi, it);
	}
}
int main(int argc, char *argv[])
{
	vector<int> vi = { 1,2,3,4,5,5,6,7 };
	print(vi, vi.begin());
	return 0;
}
