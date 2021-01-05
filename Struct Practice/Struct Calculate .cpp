#include <iostream>

struct Myinfo
{
	short id;
	int age;
	char name; //¸â¹ö(member) or ÇÊµå(field)
};




int main(void) {

	Myinfo info; // Create an Myinfo struct for info
	info.id = 1234; //assign a value to member id within struct info
	info.age = 24;
	info.name = 'yenu';


	Myinfo info2; // Create an Myinfo struct for info2
	info.id = 4567; //assign a value to member id within struct info2
	info.age = 25;
	info.name = 'who';


	int totalAge = info.age + info2.age;

	if (info.age > info2.age)
		std::cout << "info>info2";

	else if (info.age < info2.age)
		std::cout << "info2>info";

	else
		std::cout << "same age";

	//ALSO 
	info2.age += 1;

	//ALSO
	info2.age++;
}