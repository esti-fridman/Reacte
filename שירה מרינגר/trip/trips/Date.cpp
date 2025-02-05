#include "Date.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
Date::Date(int day, int month, int year)
{
	SetDay(day);
	SetMonth(month);
	SetYear(year);
}
Date::Date() {

}
Date::~Date()
{
	SetDay(3);
	SetMonth(5);
	SetYear(2024);
}

int Date::GetDay() {
	return day;
}
int Date::GetMonth() {
	return month;
}
int Date::GetYear() {
	return year;
}
void Date::SetDay(int _day) {
	if (day > 0 && day < 6) {
		day = _day;
	}
	else {
		cout << "error day";
	}

	
}
void Date::SetMonth(int _month) {
	 month = _month;
}
void Date::SetYear(int _year) {
	 year = _year;
}
