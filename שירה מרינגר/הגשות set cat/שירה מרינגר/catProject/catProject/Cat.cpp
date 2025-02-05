#include "Cat.h"
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;
Cat::Cat(const char* n, const char* c, int l)
{
	
	strcpy(name,n);
	strcpy(color,c);
	this->length = l;
}
Cat::Cat(const Cat& other) {
	setLength(this->length);
	name = new char[strlen(other.name) + 1];
	strcpy(name, other.name);
    color = new char[strlen(other.color) + 1];
	strcpy(color, other.color);

}
Cat::Cat(Cat&& other):name(other.name),color(other.color) ,length(other.length){
	other.name = nullptr;
	other.color = nullptr;
	other.length = 0;

}
char* Cat::getName() {
	return name;
}
char* Cat::getColor() {
	return color;
}
int Cat::getLength() {
	return length;
}
void Cat::setName(char* n) {
	this->name = n;
}
void Cat::setColor(char* c) {
	this->color = c;
}
void Cat::setLength(int l) {
	this->length = l;
}
void Cat::show() {
	cout << this->name << "," << this->color << "," << this->length << endl;
}

Cat::~Cat()
{
	delete[]name;
	delete[]color;
}