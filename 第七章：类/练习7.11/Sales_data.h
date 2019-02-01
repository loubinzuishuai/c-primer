#ifndef SALES_DATA_H
#define SALES_DATA_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Sales_data
{
public:
	Sales_data() = default;
	Sales_data(string s) :bookNo(s){ }
	Sales_data(string s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p) {}
	Sales_data(istream &is);
	~Sales_data();

	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	Sales_data add( const Sales_data&);

	ostream& print(ostream&);
	istream& read(istream&);
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};


#endif

