#define _CRT_SECURE_NO_WARNINGS //strcpy ����Ҷ� �������ֱ�

#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main(void) {
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~"); //���ڿ� ���� �Լ� i am so happy~ �� str�� ����
	cout << str << endl;
	free(str);
	return 0;

}