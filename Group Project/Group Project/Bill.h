#pragma once

class Bill {
private:
	double coef, discount;
public:
	Bill() { coef = 0; }
	Bill();

	double setDiscount();
	double setPrice();


	double clacPrice();

	~Bill();

};
