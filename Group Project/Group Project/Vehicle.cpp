#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle()
{

}


Vehicle::~Vehicle()
{

}


std::istream &operator >>(std::istream &IN, Vehicle &V) {
	std::cout << "~~~~Vehicle Input~~~~";
	std::cout << "\nYear: "; IN >> V.year;
	std::cout << "Make: "; IN >> V.make;
	std::cout << "Model: "; IN >> V.model;
	std::cout << "Vehicle Type"; IN >> V.vehicle_type;
	std::cout << "Sub Type: "; IN >> V.sub_type;
	std::cout << "Horsepower: "; IN >> V.horse_power;
	std::cout << "Fuel Type: "; IN >> V.fuel_type;
	std::cout << "Rental Cost: "; IN >> V.rental_cost;
	return IN;
}

std::ostream &operator <<(std::ostream &OUT, Vehicle &V) {
	std::cout << "Year: "; OUT << V.year;
	std::cout << "Make: "; OUT << V.make;
	std::cout << "Model: "; OUT << V.model;
	std::cout << "Vehicle Type"; OUT << V.vehicle_type;
	std::cout << "Sub Type: "; OUT << V.sub_type;
	std::cout << "Horsepower: "; OUT << V.horse_power;
	std::cout << "Fuel Type: "; OUT << V.fuel_type;
	std::cout << "Rental Cost: "; OUT << V.rental_cost;

	return OUT;
}

Vehicle::Vehicle(int s, int y, int h, std::string m, std::string mo, std::string v, std::string s, std::string f, double r) {
	stock_num = s;
	year = y;
	horse_power = h;
	make = m;
	model = mo;
	vehicle_type = v;
	sub_type = s;
	fuel_type = f;
	rental_cost = r;
}

