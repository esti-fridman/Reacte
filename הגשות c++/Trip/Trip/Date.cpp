#include "Date.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
Date::Date(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}
Date::Date()
{

}