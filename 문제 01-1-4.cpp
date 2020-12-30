#include <iostream>

int main(void) {
	int sell = 0;
	int wage = 0;

	std::cout << "판매 금액을 만원 단위로 입력  ( -1 to end ) : ";
	std::cin >> sell;

	if (wage == -1)
		std::cout << "프로그램을 종료합니다.";

	else {
		wage = 50 + (sell * 0.12);
		std::cout << "이번 달 급여 : " << wage << std::endl;
		
	}

	return 0;
}