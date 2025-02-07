#pragma once
class Date
{
public:
	Date(int day, int month, int year);
	Date();
	~Date();
	int getDay();
	int getMonth();
	int getYear();
	int setDay(int day);
	int setMonth(int month);
	int setYear(int year);


private:
	int day;
	int  month;
	int year;
};
