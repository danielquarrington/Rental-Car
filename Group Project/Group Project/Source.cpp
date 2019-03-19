#include <iostream>

using namespace std;

int main() {

	int option = 0;

	cout << "--------------MENU--------------" << endl;
	cout << "[1]- COMMERICAL VEHICLE" << endl;
	cout << "[2]- PERSONAL VEHICLE" << endl;
	cout << "[3]- CALCULATE DISCOUNT" << endl;
	cout << "[4]- PRINT BILL" << endl;
	cout << "[5]- CREATE CUSTOMER PROFILE" << endl;

	cout << "PLEASE SELECT AN OPTION" << endl;

	
	cin >> option;

	while (option <= 0 || option > 5) {


		cout << "INVALID OPTION, PLEASE TRY AGAIN" << endl;
		cin >> option;
	}

	switch(option)
	{
	
	    case 1: 
		{


			break;
		}

		case 2:
		{


			break;
		}

		case 3:
		{


			break;
		}

		case 4:
		{


			break;
		}

		case 5:
		{


			break;
		}
	}



	system("pause");
	return 0;
}