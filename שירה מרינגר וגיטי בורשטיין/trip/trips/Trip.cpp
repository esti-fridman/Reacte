#include "Trip.h"
#include "Date.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
Trip::Trip(int _id,Area _area,char** _site,int _numOfBus,double _price,
	double _total,int _day,int _month,int _year):date(_day,_month,_year)
{
	SetId(_id);
	SetArea(_area);
	SetSite(_site);
	SetNumOfBus(_numOfBus);
	SetInviting(0);
	SetWating(0);
	SetPrice(_price);
	SetTotal(_total);
	


}
Trip::Trip() {
	SetId(4);
	SetArea(center);
	SetNumOfBus(5);
	SetInviting(0);
	SetWating(0);
	SetPrice(50.5);
	SetTotal(1000);

}
Trip::Trip(const Trip& other) {
	SetId(other.id);
	SetArea(other.area);
	SetSite(other.site);
	SetNumOfBus(other.numOfBus);
	SetInviting(other.inviting);
	SetWating(other.wating);
	SetPrice(other.price);
	SetTotal(other.total);

}


Trip::~Trip()
{
	for (int i = 0; i < NUMOFSITE; i++)
	{
		delete site[i];
	}
	delete site;

}
Trip::Trip(Trip&& other) {
	SetId(other.id);
	SetArea(other.area);
	SetSite(other.site);
	SetNumOfBus(other.numOfBus);
	SetInviting(other.inviting);
	SetWating(other.wating);
	SetPrice(other.price);
	SetTotal(other.total);
}

int Trip::GetId()
{
	return id;
}

Area Trip::GetArea()
{
	return area;
}

char** Trip::GetSite()
{
	return site;
}

int Trip::GetNumOfBus()
{
	return numOfBus;
}

int Trip::GetInviting()
{
	return inviting;
}

int Trip::GetWating()
{
	return wating;
}

double Trip::GetPrice()
{
	return price;
}

double Trip::GetTotal()
{
	return total;
}

Date Trip::GetDate()
{
	return date;
}

void Trip::SetId(int _id)
{
	if (id > 100) {
		id = _id;
	}
	else {
		cout << "error id";
	}
	
}

void Trip::SetArea(Area _area)
{
	area = _area;
}

void Trip::SetSite(char** _site)
{

	// אם המערך לא ריק, צור זיכרון חדש ועתיק את המערך
	if (_site != nullptr) {
		site = new char* [NUMOFSITE];  // הקצה מקום למערך של מצביעים
		for (int i = 0; i < NUMOFSITE; ++i) {
			site[i] = strdup(_site[i]);  // העתקת כל מחרוזת (strdup)
		}
		
	}
}

void Trip::SetNumOfBus(int _numOfBus)
{
	numOfBus = _numOfBus;
}

void Trip::SetInviting(int _inviting)
{
	inviting = _inviting;
}

void Trip::SetWating(int _wating)
{
	wating = _wating;

}

void Trip::SetPrice(double _price)
{
	price = _price;
}

void Trip::SetTotal(double _total)
{
	total = _total;
}

int Trip::MaxOfPeople() {
	return GetNumOfBus() * 50;
}
bool Trip::IfDest(char* dest) {
	for (int i = 0; i < NUMOFSITE; i++)
	{
		if (strcmp(site[i], dest) == 0) {
			return true;
		}
	}
	return false;
}
int Trip::NumOfSite() {
	return NUMOFSITE;
}
int Trip::NumOfEmptyPlace() {
	return MaxOfPeople() - inviting;
}
void Trip::UpdateWeting(int num) {
	int emptyPlace = NumOfEmptyPlace();
	if (emptyPlace <= num) {
		SetInviting(GetInviting()+ num);
		cout << "all the people";
	}
	else {
		SetWating(GetInviting() + num - MaxOfPeople());
        cout << GetWating();
		SetInviting(MaxOfPeople());
	}

}
void Trip::Print() {
	cout << GetId() << " "<< (GetArea()) << " "<< GetPrice() << " "<< MaxOfPeople() << " "<< NumOfEmptyPlace() << endl;
}
double Trip::Earn() {
	return GetInviting() * GetPrice() - GetTotal();
}
//void Trip::SetDate(Date _date)
//{
//	date = _date;
//}
