#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void) {
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2); 
	//���� SwapByRef2(int ref1, int ref2)�� �ۼ��ϸ�
	//�Լ��� ���� ���Ŀ������ʹ� ���� �ٲ��� �����Ƿ�
	//�״�� 10, 20�� ��µȴ�.
	//�Լ��� ���� �Ŀ��� �� ���� �����Ϸ��� Reference�� �޾ƾ��Ѵ�.

	cout << "Val1 : " << val1 << endl;
	cout << "Val2 : " << val2 << endl;

	return 0;
}