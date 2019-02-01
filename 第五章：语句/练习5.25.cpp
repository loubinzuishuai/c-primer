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
	double a, b;
	cout << "请输入被除数和除数：" << endl;
	while (cin >> a >> b)
	{
		try
		{
			if (b == 0)
				throw logic_error("除数不能为0");
			double c = a / b;
			cout << "商为：" << c << endl;
			cout << "请输入被除数和除数" << endl;
		}
		catch (logic_error err)
		{
			cout << err.what() << endl;
			cout << "请重新输入被除数和除数" << endl;
		}
	}
	return 0;
}
