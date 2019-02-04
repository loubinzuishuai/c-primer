#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string address;
	string name;
public:
	Person() = default;
	Person(string na, string ad) : name(na), address(ad) {}
	string get_name() const { return name; }
	string get_address() const { return address; }
	ostream& print(ostream& os);
	istream& read(istream& is);
};


#endif