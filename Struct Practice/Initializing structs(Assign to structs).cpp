#include <iostream>

struct Employee
{
	short id;
	int age;
	double wage;
};

int main(void) {

	Employee yenu = { 1234,24,30 };
	//yenu.id = 1234
	//yenu.age = 24
	//yenu.wage = 30 ó�� ����� �� �ִ�

	Employee who = { 12345, 25 };
	//Uniform Initialization
	//who.age = 0.0 (double�̴ϱ�)


	return 0;
}