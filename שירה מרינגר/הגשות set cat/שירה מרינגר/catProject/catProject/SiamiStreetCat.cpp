#include "Cat.h"
#include "SiamiCat.h"
#include "StreetCat.h"
#include "SiamiStreetCat.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
SiamiStreetCat::SiamiStreetCat(const char* n, const char* c, int l, const char* myFood, int number):Cat(n,c,l), SiamiCat(n,c,l,myFood),StreetCat(number,n,c,l){
	cout << "in c`tor SiamiStreetCat";
}
SiamiStreetCat::SiamiStreetCat(const SiamiStreetCat& other):Cat(other), SiamiCat(other), StreetCat(other){

	cout << "in copyC`tor SiamiStreetCat";

}
SiamiStreetCat::SiamiStreetCat(SiamiStreetCat&& other):Cat(other), SiamiCat(other), StreetCat(other) {
	cout << "in moveC`tor SiamiStreetCat";
}
void SiamiStreetCat:: show() {
	StreetCat::show();
	SiamiCat::show();
}