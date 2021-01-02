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
	//만약 SwapByRef2(int ref1, int ref2)로 작성하면
	//함수가 끝난 이후에서부터는 값이 바뀌지 않으므로
	//그대로 10, 20이 출력된다.
	//함수가 끝난 후에도 그 값을 유지하려면 Reference로 받아야한다.

	cout << "Val1 : " << val1 << endl;
	cout << "Val2 : " << val2 << endl;

	return 0;
}