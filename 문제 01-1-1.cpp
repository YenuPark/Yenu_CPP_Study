#include <iostream>

int main(void) {
	int arr1[5];
	int sum = 0;

	std::cout << "첫 번째 정수 입력 ";
	std::cin >> arr1[0];

	std::cout << "두 번째 정수 입력 ";
	std::cin >> arr1[1];

	std::cout << "세 번째 정수 입력 ";
	std::cin >> arr1[2];

	std::cout << "네 번째 정수 입력 ";
	std::cin >> arr1[3];

	std::cout << "다섯 번째 정수 입력 ";
	std::cin >> arr1[4];

	for (int i = 0; i < 5; i++) {
		sum += arr1[i];
	}

	std::cout << "합계 : " << sum << std::endl;


	return 0;
}