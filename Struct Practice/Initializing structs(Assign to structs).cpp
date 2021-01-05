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
	//yenu.wage = 30 처럼 사용할 수 있다

	Employee who = { 12345, 25 };
	//Uniform Initialization
	//who.age = 0.0 (double이니까)


	return 0;
}