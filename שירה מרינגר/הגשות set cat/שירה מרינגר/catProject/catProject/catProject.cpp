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
	// ��� �� ���� ���������? ��� ������ ���� ���� ��� ������� ������ ������� CAT ���� ������� ����
	//SiamiStreetCat ssc1(Cat("mitzi", "gingi", 8),"mouse", 5);
	SiamiStreetCat ssc1("mitzi", "gingi", 8,"mouse",5);
	ssc1.show();
	SiamiStreetCat ssc2(ssc1);
	//������� ���� �� ����� ��� ���� �� ������� strcpy() ��� ������ ����� �� �����

}