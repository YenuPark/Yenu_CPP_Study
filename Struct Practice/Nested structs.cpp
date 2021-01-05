#include <iostream>

struct Employee
{
	short id;
	int age;
	double wage;
};

struct Company
{
	Employee CEO; //Employee is a struct within the Company struct
	int numberOfEmployees;
};

int main(void) {
	Company myCompany;

	std::cout << myCompany.CEO.wage << std::endl;



	Company myCompany = { {1, 42, 600000.0f}, 5 }; 
	// init of nested struct
	//id = 1, age = 42, wage = 600000.0f, numberOfEmployees = 5

}