#include <iostream>


struct Employee
{
	short id;
	int age;
	double wage;
};

int main()
{
	std::cout << "The size of Employee is " << sizeof(Employee);

	return 0;
}

// The size of Employee is 16
//The reason is For performance reasons, the compiler sometimes adds gaps to the struct.
//THIS IS CALLED PADDING
//In the Employee struc above, the compiler adds 2bytes of invisible padding
//after the member id to make the struct size 16bytes instead of 14 bytes

​