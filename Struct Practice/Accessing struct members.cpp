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
	info.name = 'a';


	Myinfo info2; // Create an Myinfo struct for info2
	info.id = 4567; //assign a value to member id within struct info2
	info.age = 25;
	info.name = 'b';

	return 0;

}