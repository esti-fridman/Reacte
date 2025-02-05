#pragma once
#include "Date.h"
#define NUMOFSITE 5
enum Area
{
	north,
	south,
	center
};
class Trip
{
public:
	
	Trip(int _id, Area _area, char** _site, int _numOfBus, double _price,
		double _total, int _day, int _month, int _year);
	Trip();
	Trip(const Trip& other);
	~Trip();
	Trip(Trip&& other);
	int MaxOfPeople();
	bool IfDest(char* Dest);
	int NumOfSite();
	int GetId();
	int NumOfEmptyPlace();
	void UpdateWeting(int num);
	void Print();
	double Earn();
	Area GetArea();
	char** GetSite();
	int GetNumOfBus();
	int GetInviting();
	int GetWating();
	double GetPrice();
	double GetTotal();
	Date GetDate();
	void SetId(int _id);
    void SetArea(Area _area);
	void SetSite(char** _site);
	void SetNumOfBus(int _numOfBus);
	void SetInviting(int _inviting);
	void SetWating(int _wating);
	void SetPrice(double _price);
	void SetTotal(double _total);
    void SetDate(Date _date);

private:
	int id;
	Area area;
	char** site;
	int numOfBus;
	int inviting;
	int wating;
	double price;
	double total;
	Date date;

};

