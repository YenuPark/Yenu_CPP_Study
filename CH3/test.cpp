#include <iostream>

using namespace std;


struct Car1 {

	int fuelGauge = 30;
	int curSpeed;
};

void ShowCarState(const Car1& car) {
	cout << "ID : " << car.fuelGauge << endl;
}

int main(void) {
	Car1 run99 = {3};
	ShowCarState(run99);

	Car1 car2;
	ShowCarState(car2);


}