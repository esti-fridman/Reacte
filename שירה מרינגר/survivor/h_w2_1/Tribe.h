#pragma once
#include "Survivor.h"
class Tribe {
public:
	char nameSurvivor[20];
	int numofmax;
	Survivor** srr;
	int numOfSurvivor;
public:
	Tribe();
	~Tribe();
	Tribe(char nameSurvivor[20], int numofmax);
	void add(Survivor* s);
	void free(char name[20]);
	void print();
	
};
