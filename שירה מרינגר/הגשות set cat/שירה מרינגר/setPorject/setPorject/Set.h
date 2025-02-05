#pragma once
class Set
{
public:
	Set(int max);
	Set();
	~Set();
	Set(const Set& other);
	Set(Set&& other);
	void operator=(const Set& other);
	int* getArr();
	void setArr(int new_arr[]);
	int getMaxSize();
	void SetMaxSize(int size);
	friend ostream& operator<<(ostream& os,Set s);
	const Set& operator+=(int num);
	Set& operator+(int num);
	Set& operator+(const Set& s);
	bool operator>(const Set& s);
	bool operator==(const Set& s);
	int operator[](int index);
private:
	int* arr;
	int maxSize;
};











