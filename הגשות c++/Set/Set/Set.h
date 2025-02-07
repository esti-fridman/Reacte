#pragma once
class Set
{
public:
	int* getArr();
	void setArr(int new_arr[]);
	int getMaxSize();
	void SetMaxSize(int size);
	Set(int maxSize);
	Set();
	~Set();
	Set(const Set& other);
	Set(Set&& other);
	Set& operator=(const Set& other);
	Set& operator=(Set&& other);
	friend ostream& operator<<(ostream& ost, Set s);
	Set& operator+=(int num);
	Set& operator+(int num);
	Set& operator+( const Set& other);



private:
	int* arr;
	int maxSize;
};
