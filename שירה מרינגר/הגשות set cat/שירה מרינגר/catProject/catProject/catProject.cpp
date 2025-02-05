#include "Cat.h"
#include "SiamiCat.h"
#include "StreetCat.h"
#include "SiamiStreetCat.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
void main() {
	//Cat c("mitzi", "gingi", 8);
	// למה לא עובר קומפילציה? הרי הגדרתי בנאי הזזה בכל המחלקות ושליחת האוביקט CAT נשלח כאוביקט זמני
	//SiamiStreetCat ssc1(Cat("mitzi", "gingi", 8),"mouse", 5);
	SiamiStreetCat ssc1("mitzi", "gingi", 8,"mouse",5);
	ssc1.show();
	SiamiStreetCat ssc2(ssc1);
	//הפרויקט נתקע על שגיאת זמן ריצה על פונקציה strcpy() ולא הצלחתי לפתור את הבעיה

}