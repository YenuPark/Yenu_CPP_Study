#include <iostream>

struct Point3d
{
	double x;
	double y;
	double z;
};

//구조체를 반환하는 함수>>여러변수를 한번에 반환가능
Point3d getZeroPoint()
{
	Point3d temp = { 0.0, 0.0, 0.0 };
	return temp;
}

int main()
{
	Point3d zero = getZeroPoint();

	if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
		std::cout << "The point is zero\n";

	else
		std:cout << "The point is not zero \n";

	return 0;
}

//The point is zero
