#include "Cat.h"
#pragma once
class StreetCat:virtual public Cat
{
public:
	StreetCat(int number, const char* n, const char* c, int l);
	StreetCat(const StreetCat& other);
	StreetCat(StreetCat&& other);
	~StreetCat();
	int getNumber();
	void setNumber(int n);
	void show();

protected:
	int number;

};

