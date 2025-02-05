#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
#include "Survivor.h"
using namespace std;

 Survivor::Survivor(const char* name2, int age2,Status status2) {
	strcpy_s(name, name2);
	cout << name;
	age = age2;
	status = status2;
	
}
void Survivor::print() {
	cout << " name " << name << " age " << age<<" status "<<status;
}

