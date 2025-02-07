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
Set::Set(int size) {
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

Set& Set::operator=(const Set& other) {
	if (this != &other) {
		delete[] arr;
		maxSize = other.maxSize;
		arr = new int[maxSize];
		std::memcpy(arr, other.arr, maxSize * sizeof(int));
	}
	return *this;
}


Set& Set::operator=(Set&& other) noexcept {
	if (this != &other) {
		delete[] arr;
		arr = other.arr;
		maxSize = other.maxSize;
		other.arr = nullptr;
		other.maxSize = 0;
	}
	return *this;
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

Set& Set::operator+=(int num) {
	int i=0;
	bool flag = true;
	for ( i = 0; i < maxSize && arr[i] !=0 &&flag; i++)
	{
		if (arr[i] == num) {
			flag = false;
		}
	}
	if (flag)
	{
		arr[i] = num;
	}
	return *this;


}
Set& Set::operator+(int num) {
	int* newArr = new int[maxSize + 1];  
	int i;
	for ( i= 0; i < maxSize&& arr[i] != 0; i++) {
		newArr[i] = arr[i]; 
	}
	newArr[i] = num;  
	delete[] arr;
	arr = newArr; 
	maxSize++;
	return *this;
}
Set& Set::operator+(const Set& other) {
	int* newArr = new int[maxSize + 1];
	int i,j;
	for (i = 0; i < maxSize && arr[i] != 0; i++) {
		newArr[i] = arr[i];
	}
	for ( j=0 ; j < other.maxSize && arr[j] != 0; j++) {
		newArr[i+j] = other.arr[j];
	}
	
	delete[] arr;
	arr = newArr;
	maxSize++;
	return *this;
}

