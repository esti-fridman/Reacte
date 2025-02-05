#pragma once
#include "Cat.h"
class SiamiCat :virtual public Cat
{
public:
	SiamiCat(const char* n, const char* c, int l,const char* myFood);
	SiamiCat(const SiamiCat& other);
	SiamiCat(SiamiCat&& other);
	~SiamiCat();
	char* getMyFood();
	void setMyFood(char* f);
	void show();

protected:
	char* myFood = new char[10];
};

