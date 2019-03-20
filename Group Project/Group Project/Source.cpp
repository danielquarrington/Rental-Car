#include <iostream>
#include <fstream>

#include "Vehicle.h"
#include "Date.h"


using namespace std;

int main() {
	int const STOCK_SIZE = 10;
	bool run = true;
	//VEHICLES (in array)
	Vehicle vehicles[STOCK_SIZE];

	fstream data;
	data.open("autospecs.txt");
	for (int i = 0; i < STOCKSIZE; i++) {

	}
	//INITIIALIZE ARRAY
	vehicles{
		new Vehicle()
	};

	while (run) {
		int option = 0;

		cout << "--------------MENU--------------" << endl;
		cout << "[0]- SHUTDOWN" << endl;
		cout << "[1]- COMMERICAL VEHICLE" << endl;
		cout << "[2]- PERSONAL VEHICLE" << endl;
		cout << "[3]- CALCULATE DISCOUNT" << endl;
		cout << "[4]- PRINT BILL" << endl;
		cout << "[5]- CREATE CUSTOMER PROFILE" << endl;
		cout << "[6]- ADD VEHICLE" << endl;

		cout << "PLEASE SELECT AN OPTION" << endl;


		cin >> option;

		while (option < 0 || option > 6) {


			cout << "INVALID OPTION, PLEASE TRY AGAIN" << endl;
			cin >> option;
		}

		switch (option)
		{
		case 0:
		{
			system("cls");
			cout << "~~Shutdown~~";
			run = false;
			break;
		}

		case 1: //COMMERCIAL VEHICLE
		{
			system("cls");
			cout << "";
			break;
		}

		case 2: //PERSONAL VEHICLE
		{
			system("cls");

			break;
		}

		case 3: //CALCULATE DISCOUNT
		{
			system("cls");

			break;
		}

		case 4: //PRINT BILL
		{
			system("cls");

			break;
		}

		case 5: //CREATE CUSTOMER PROFILE
		{
			system("cls");

			break;
		}
		case 6: //ADD VEHICLE
		{
			system("cls");
			Vehicle temp;
			cin >> temp;

			//PRINT THIS TO VEHICLE FILE
			//MAKE SURE TO INCREMENT STOCK NUMBER

			break;
		}
		}

	}
	cout << "\n";
	system("pause");
	return 0;
}