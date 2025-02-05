#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
#include "Survivor.h"
#include "Tribe.h"
using namespace std;
Tribe::Tribe() {
	strcpy_s(nameSurvivor, "shira");
	numofmax = 4;
	srr = new Survivor * [numofmax];
	numOfSurvivor = 0;
}
 Tribe::Tribe(char _nameSurvivor[20], int _numofmax){
	strcpy_s(nameSurvivor, _nameSurvivor);
	numofmax = _numofmax;
	srr = new Survivor * [numofmax];
	numOfSurvivor = 0;
}
void Tribe::add(Survivor* s) {
	
	if (numofmax > numOfSurvivor) {
		
		srr[numOfSurvivor] = s;
		numOfSurvivor++;
	}
	else
		cout << "overflow";

}
void Tribe::free(char* _name) {
	int i = 0;
	bool flag = false;
	for (   ; i < numofmax && !flag; i++)
	{
		if (strcmp(srr[i]->name, _name) == 0) {
			flag = true;
			delete srr[i];
		}
	}
    for ( int j=i-1 ; j< numofmax-1; j++)
		{
	     srr[j]->age = srr[j + 1]->age;
		 strcpy_s(srr[j]->name, srr[j]->name);

		}
	for (int k = i; k < numOfSurvivor; k++)
	{
		delete srr[k];
	     
	}
	if (flag) {
		numOfSurvivor = numOfSurvivor - 1;
	}
}
void Tribe::print() {
	cout << "Name of Tribe: " << nameSurvivor << " | Max Survivors: " << numofmax << 
		" | Number of Survivors: " << numOfSurvivor << endl;
	for (int i = 0; i < numOfSurvivor; i++)
	{
		srr[i]->print();
	}
  }
//לא מובן למה עושה שגיאת קומפילציה
	/*Tribe::~Tribe();
	{

		for (int i = 0; i < numOfSurvivor; i++) {
			delete srr[i];
		}
		delete[] srr;
	}*/