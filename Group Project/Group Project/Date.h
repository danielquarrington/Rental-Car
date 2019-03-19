
//DATE.H 

#pragma once
#ifndef DATE_H
#define _CRT_SECURE_NO_WARNINGS
#define DATE_H

class date {

private:

	int day;
	int month;
	int year;

public:

	//Constructor

	date(int,int,int);
	date();

	//Setter Functions

	void SetDay(int d)   { day = d;}
	void SetMonth(int m) { month = m; }
	void SetYear(int y)  { year = y; }

	//Getter Functions

	int GetDay()   { return day; }
	int GetMonth() { return month; }
	int GetYear()  { return year; }

	//Member Function 

	int CalculateDays(date,date);


};


#endif // !DATE_H
