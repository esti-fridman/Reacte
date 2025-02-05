#pragma once
class Cat
{
public:
	Cat(const char* n,const char* c,int l);
	~Cat();
	Cat(const Cat& other);
	Cat(Cat&& other);
	char* getName();
	char* getColor();
	int getLength();
	void setName(char* n);
	void setColor(char* c);
	void setLength(int l);
	void show();

protected:
	char* name = new char[10]; 
	char* color = new char[10];
	int length;
};

