#include "Date.h"

date::date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;

}

//DATE.CPP 

int date::CalculateDays(date d_one, date d_two)
{

	int calcdays;

	calcdays = d_one.GetDay() - d_two.GetDay();


	return calcdays;
}
