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
	cout << "�����뱻�����ͳ�����" << endl;
	while (cin >> a >> b)
	{
		try
		{
			if (b == 0)
				throw logic_error("��������Ϊ0");
			double c = a / b;
			cout << "��Ϊ��" << c << endl;
			cout << "�����뱻�����ͳ���" << endl;
		}
		catch (logic_error err)
		{
			cout << err.what() << endl;
			cout << "���������뱻�����ͳ���" << endl;
		}
	}
	return 0;
}
