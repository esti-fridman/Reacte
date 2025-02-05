#pragma once
enum Status 
{ single, family };

class Survivor
{
public:
	char name[20];
	int age;
	Status status;
public:
	Survivor(const char* name, int age,Status status);
	void print();
	

};


