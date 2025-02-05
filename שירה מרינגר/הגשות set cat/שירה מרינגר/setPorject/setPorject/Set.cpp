#include "Set.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;

int* Set::getArr() {
	return arr;

}
void Set::setArr(int new_arr[]) {
     *arr = *new_arr;
}
int Set::getMaxSize() {
	return maxSize;
}
void Set::SetMaxSize(int size) {
	maxSize = size;
}
Set::Set(int size){
	SetMaxSize(size);
	arr = new int[getMaxSize()];
}
Set::Set() {
	SetMaxSize(1000);
	arr = new int[getMaxSize()];
}

Set::Set(const Set& other) {
	SetMaxSize(other.maxSize);
	for (int i = 0; i < maxSize; i++) {
		other.arr[i] = this->arr[i];
	}

}
Set::Set(Set&& other) {
	SetMaxSize(other.maxSize);
	for (int i = 0; i < maxSize; i++) {
		other.arr[i] = this->arr[i];
	}
}
void Set::operator=(const Set& other) {
	if (this != &other) {
		/*SetMaxSize(other.maxSize);
		for (int i = 0; i < maxSize; i++) {
			other.arr[i] = this->arr[i];
		}*/
		Set(other);
	}
}
ostream& operator<<(ostream& os, Set s) {
	os << "Set contents: [";
	for (int i = 0; i < s.getMaxSize(); ++i) {
		os << s.getArr()[i];
		if (i < s.getMaxSize() - 1) {
			os << ", "; // הפרדת ערכים בפסיק
		}
	}
	os << "]";
	os << "maxSize" << s.getMaxSize();
	return os;
}
const Set& Set::operator+=(int num) {
	for (int i = 0; i < getMaxSize(); i++) {
		if (arr[i] == num) {
			return *this;  // אם המספר כבר קיים, אין צורך להוסיף אותו
		}
		if (arr[i] == 0) {
			arr[i] = num;  // מצאנו מקום פנוי
			return *this;
		}
	}
	return *this;  // אם לא מצאנו מקום פנוי, פשוט מחזירים את האובייקט (או שניתן להוסיף טיפול בשגיאות)
}
Set& Set::operator+(int num) {
	Set new_s(*this);
	new_s += num;
	return new_s;
}
Set& Set::operator+(const Set& s) {
	Set new_s(this->maxSize + s.maxSize);
	int i = 0;
	for (; i<this->maxSize; i++) {
		new_s.arr[i] = this->arr[i];
	}
	bool f = false;
	//לולאה שעוברת יחד גם על כל ערכי הקבוצה S וגם על המשך הקבוצה החדשה
	for (int k=0; k< s.maxSize;k++) {
		f = false;
		//לולאה שעוברת על כל המספרים של קבוצת המספרים this ומוודא שלא יהיה כפילות 
		for (int j = 0; j < this->maxSize; j++) {
			if (s.arr[k] == this->arr[j]) {
				f = true;
			}
		}
		//רק בתנאי שהמספר הנוכחי בקבוצה S לא היה בקבוצה this
		if (f == false) {
			new_s.arr[i] = s.arr[k];
			i++;
		}
	}
	return new_s;


}
bool Set::operator>(const Set& s) {
	int count1=0, count2=0;
	for (int i = 0; i < this->maxSize; i++) {
		if (this->arr[i] != 0) {
			count1++;
		}
	}
	// בהנחה שערך 0 מסמן מקום ריק במערך ואינו ערך בקבוצה
	for (int i = 0; i < s.maxSize; i++) {
		if (s.arr[i] != 0) {
			count2++;
		}
	}
	return count1 > count2;
}
bool Set::operator==(const Set& s) {
	int count1 = 0, count2 = 0;
	for (int i = 0; i < this->maxSize; i++) {
		if (this->arr[i] != 0) {
			count1++;
		}
	}
	// בהנחה שערך 0 מסמן מקום ריק במערך ואינו ערך בקבוצה
	for (int i = 0; i < s.maxSize; i++) {
		if (s.arr[i] != 0) {
			count2++;
		}
	}
	if (count1 != count2) {
		return false;
	}
	for (int i = 0; i < count1; i++) {
		if (this->arr[i] != s.arr[i]) {
			return false;
		}
	}
	return true;
}
int Set::operator[](int index) {
	return this->arr[index];
}

Set::~Set() {
	delete[] arr;
}