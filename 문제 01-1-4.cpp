#include <iostream>

int main(void) {
	int sell = 0;
	int wage = 0;

	std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�  ( -1 to end ) : ";
	std::cin >> sell;

	if (wage == -1)
		std::cout << "���α׷��� �����մϴ�.";

	else {
		wage = 50 + (sell * 0.12);
		std::cout << "�̹� �� �޿� : " << wage << std::endl;
		
	}

	return 0;
}