#include <iostream>

int main(void) {
	int arr1[5];
	int sum = 0;

	std::cout << "ù ��° ���� �Է� ";
	std::cin >> arr1[0];

	std::cout << "�� ��° ���� �Է� ";
	std::cin >> arr1[1];

	std::cout << "�� ��° ���� �Է� ";
	std::cin >> arr1[2];

	std::cout << "�� ��° ���� �Է� ";
	std::cin >> arr1[3];

	std::cout << "�ټ� ��° ���� �Է� ";
	std::cin >> arr1[4];

	for (int i = 0; i < 5; i++) {
		sum += arr1[i];
	}

	std::cout << "�հ� : " << sum << std::endl;


	return 0;
}