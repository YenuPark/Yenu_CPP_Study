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
	cout << "���ڸ� �Է��ϼ��� : " << endl;
	cin >> a;
	plusone(a);

	int b;
	cout << "���ڸ� �Է��ϼ��� : " << endl;
	cin >> b;
	change(b);

	cout << a << "��" << b << endl;

	return 0;
}