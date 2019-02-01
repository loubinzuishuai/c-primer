#include "Sales_data.h"



Sales_data::Sales_data(istream & is)
{
	read(is);
}

Sales_data::~Sales_data()
{
}

Sales_data & Sales_data::combine(const Sales_data &rns)
{
	// TODO: �ڴ˴����� return ���
	units_sold += rns.units_sold;
	revenue += rns.revenue;
	return *this;
}

double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0.0;
}

Sales_data Sales_data::add(const Sales_data &item)
{
	units_sold += item.units_sold;
	revenue += item.revenue;
	return *this;
}

ostream & Sales_data::print(ostream &os)
{
	// TODO: �ڴ˴����� return ���
	os << bookNo <<" " << units_sold << " " << revenue << " " << avg_price();
	return os;
}

istream & Sales_data::read(istream &is)
{
	// TODO: �ڴ˴����� return ���
	double price;
	is >> bookNo >> units_sold >> price;
	revenue = price * units_sold;
	return is;
}


