#include "Cat.h"
#include "StreetCat.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
StreetCat::StreetCat(int number, const char* n, const char* c, int l):Cat(n,c,l){
	this->number = number;

}
StreetCat::StreetCat(const StreetCat& other): Cat(other) {
	setNumber(other.number);
}
StreetCat::StreetCat(StreetCat&& other): Cat(other) {
	setNumber(other.number);
}
//StreetCat::~StreetCat() {
//
//}
int StreetCat::getNumber() {
	return this->number;

}
void StreetCat::setNumber(int n) {
	number = n;
}
void StreetCat::show() {
	Cat::show();
	cout << this->number<< endl;
}