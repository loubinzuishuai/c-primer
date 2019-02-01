#include<iostream>
#include<queue>
using namespace std;
#define Maxn 1024

typedef struct {
	int parentData;
	int lchild;
	int rchild;
} Node;


int main()
{
	vector<int> vi;
	int i;
	while (cin >> i)
		vi.push_back(i);
	for (auto it = vi.begin(); it != vi.end(); it++)
		*it = ((*it % 2 == 1) ? *it * 2 : *it);
	for (auto it = vi.begin(); it != vi.end(); it++)
		cout << *it << " ";
	cout << endl;
	
	return 0;
}
