#include "Person.h"



Person::Person()
{
}


Person::~Person()
{
}

ostream & Person::print(ostream & os)
{
	// TODO: �ڴ˴����� return ���
	os << name << address;
	return os;
}

istream & Person::read(istream & is)
{
	// TODO: �ڴ˴����� return ���
	is >> name >> address;
	return is;
}
