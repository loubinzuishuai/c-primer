#include<iostream>
#include<string>
#include <vector>
using namespace std;
class Person
{
private:
	string address;
	string name;
public:
	string get_name() const { return name; }
	string get_address() const { return address; }
};
int main(int argc, char *argv[])
{
	Person person1;
	
	return 0;	
}

 