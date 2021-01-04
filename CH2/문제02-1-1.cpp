#include <iostream>
using namespace std;

int plusone(int& a) {
	return a++;
}

int change(int& b) {
	b=b * (-1);
	return b;
}

int main(void) {

	int a;
	cout << "숫자를 입력하세요 : " << endl;
	cin >> a;
	plusone(a);

	int b;
	cout << "숫자를 입력하세요 : " << endl;
	cin >> b;
	change(b);

	cout << a << "과" << b << endl;

	return 0;
}