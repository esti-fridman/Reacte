#pragma once
#include "Date.h"
enum Area
{
	north,
	center,
	south
};
class trip {
public:
private:
	int codeTrip;
	Area area;
	char** sites;
	int numBusses;
	int numInviting;
	int numWaiting;
	int price;
	int sum;
	Date date;


};
