#include <iostream>

int main(void) {
	int a = 0;

	std::cout << "숫자를 입력하세요 : ";
	std::cin >> a;


		for (int j = 1; j < 11; j++) {

			std::cout << a << " X " << j << " = " << a*j <<std::endl;


		}

}