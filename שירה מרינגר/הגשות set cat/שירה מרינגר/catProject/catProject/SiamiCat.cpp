#include "Cat.h"
#include "SiamiCat.h"
#include "StreetCat.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
SiamiCat::SiamiCat(const char* n, const char* c, int l,const char* myFood):Cat(n,c,l){
	strcpy(this->myFood,myFood);
}
SiamiCat::SiamiCat(const SiamiCat& other):Cat(other) {
	myFood = new char[strlen(other.myFood) + 1];
	strcpy(this->myFood, other.myFood);
		

}
SiamiCat::SiamiCat(SiamiCat&& other):Cat(other),myFood(other.myFood) {
	other.myFood = nullptr;
}
SiamiCat::~SiamiCat(){
	delete[] myFood;
}
char* SiamiCat::getMyFood() {
	return this->myFood;
}
void SiamiCat::setMyFood(char* f) {
	myFood = f;
}
void SiamiCat::show() {
	Cat::show();
	cout << this->myFood << endl;
}