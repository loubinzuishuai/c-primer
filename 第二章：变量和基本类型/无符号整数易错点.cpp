#include <iostream>
using namespace std;
int main()
{
	unsigned int a, b;
	a = 10, b = 40;
	cout << a - b << endl;
	cout << b - a << endl;
	while (1) {};
}

//输出为 
//429467266
//30
//这说明当无符号数的运算中出现负数会出错