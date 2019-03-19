#pragma once
#include <string>
class Vehicle
{
protected:
	int stock_num, year, horse_power;
	std::string make, model, vehicle_type, sub_type, fuel_type;
	double rental_cost;
public:
	Vehicle();
	~Vehicle();


	void set_stockNum(int s) { stock_num = s; }
	void set_year(int y) { year = y; }
	void set_horsePower(int h) { horse_power = h; }
	void set_make(std::string m) { make = m; }
	void set_model(std::string m) { model = m; }
	void set_vehicleType(std::string v) { vehicle_type = v; }
	void set_subType(std::string s) { sub_type = s; }
	void set_fuelType(std::string f) { fuel_type = f; }
	void set_rentalCost(double r) { rental_cost = r; }

	int get_stockNum() { return stock_num; }
	int get_year() { return year; }
	int get_horse_power() { return horse_power; }
	std::string get_make() { return make; }
	std::string get_model() { return model; }
	std::string get_vehicle_type() { return vehicle_type; }
	std::string get_sub_type() { return sub_type; }
	std::string get_fuel_type() { return fuel_type; }
	double get_rental_cost() { return rental_cost; }

	friend std::istream &operator >>(std::istream &, Vehicle &);
	friend std::ostream &operator <<(std::ostream &, Vehicle &);


};

