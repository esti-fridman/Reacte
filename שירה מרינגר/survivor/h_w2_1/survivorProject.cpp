#include <iostream>
#include <cstring>
#include <string.h>
#include "Survivor.h"
#include "Tribe.h"

using namespace std;
int main()
{   
	/*int size;
	cout << "how many Survivor";
	cin >> size;
	Survivor** s1 = new Survivor*[size];
	Survivor** s2 = new Survivor*[size];
	for (int i = 0; i < size; i++)
	{
		char name1[20];
		int age;
		s1[i] = new Survivor;
		cout << "insert name and age";
		cin >> name1;
		cin	>> age;
		s1[i]->full(name1, age);
		char name2[20];
		s2[i] = new Survivor;
		cout << "insert name and age";
		cin >> name2;
		cin>> age;
		s2[i]->full(name2, age);
	}
	for (int i = 0; i < size; i++)
	{
		s1[i]->print();
		s2[i]->print();
	}
	for (int i = 0; i < size; i++)
	{
		delete s1[i];
		delete s2[i];
	}
	delete []s1;
	delete []s2;*/
	Tribe* t1;
	int numofmax;
	cout << "insert maxofsurvivor";
	cin >> numofmax;
	char name1[20];
	cout << "insert name to tribe";
	cin >> name1;
	t1 = new Tribe(name1, numofmax);
	for (int i = 0; i < t1->numofmax; i++)
	{
		char name[20];
		int age;
		Status status;
		int statusnum;
		cout << "insert name and age";
		cin >> name;
		cin >> age;
		cout << "insert status";
		cin >> statusnum;
		status = (Status)statusnum;
        t1->srr[i] = new Survivor(name, age, status);
		t1->add(t1->srr[i]);
	}
	//אשמח אם תוכלי לבדוק את פונקציות print() 
	//הם לא עובדות כמו שצריך
	t1->print();
	delete(t1->srr[0]->name);
	
}

