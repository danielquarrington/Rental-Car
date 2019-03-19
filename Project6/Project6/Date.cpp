#include "Date.h"
#include <ctime>
#include <iostream>
#include <string>

date::date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;

}

date::date()
{
	std::string DAY[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	time_t curenttime;
	time(&curenttime);
	tm TIME = *localtime(&curenttime);

	int year = TIME.tm_year + 1900;
	int month = TIME.tm_mon +1;
	int day = TIME.tm_mday;
	int weekday = TIME.tm_wday;


	std::cout << DAY[weekday] << "," << day << "/" << month << "/" << year << std::endl;


}

//DATE.CPP 

int date::CalculateDays(date d_one, date d_two)
{

	int calcdays;

	calcdays = d_one.GetDay() - d_two.GetDay();


	return calcdays;
}
