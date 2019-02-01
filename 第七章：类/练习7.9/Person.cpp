#include "Person.h"



Person::Person()
{
}


Person::~Person()
{
}

ostream & Person::print(ostream & os)
{
	// TODO: 在此处插入 return 语句
	os << name << address;
	return os;
}

istream & Person::read(istream & is)
{
	// TODO: 在此处插入 return 语句
	is >> name >> address;
	return is;
}
