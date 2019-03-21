#pragma once
#include <string>
class Customer
{
private:
	std::string name;
	int account_num;
	double discount;
	int phone_num;
public:
	Customer();
	~Customer();
};

