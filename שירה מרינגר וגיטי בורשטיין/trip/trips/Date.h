#pragma once
class Date
{
public:
	 Date(int day,int month,int year);
	 Date();
	 ~Date();
	 int GetDay();
	 int GetMonth();
	 int GetYear();
	 void SetDay(int day);
	 void SetMonth(int month);
	 void SetYear(int year);

private:
	int day;
	int month;
	int year;

};

