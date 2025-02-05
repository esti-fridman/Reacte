#pragma once
#include "Cat.h"
#include "SiamiCat.h"
#include "StreetCat.h"
class SiamiStreetCat:public SiamiCat,public StreetCat
{
public:
	SiamiStreetCat(const char* n, const char* c, int l, const char* myFood, int number);
	SiamiStreetCat(const SiamiStreetCat& other);
	SiamiStreetCat(SiamiStreetCat&& other);
	void show();

	//~SiamiStreetCat();

private:


};

