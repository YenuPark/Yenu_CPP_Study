#define _CRT_SECURE_NO_WARNINGS //strcpy 사용할때 정의해주기

#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main(void) {
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~"); //문자열 복사 함수 i am so happy~ 를 str에 복사
	cout << str << endl;
	free(str);
	return 0;

}