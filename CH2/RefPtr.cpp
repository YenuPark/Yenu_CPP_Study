#include <iostream>
using namespace std;

int main(void) {
	int num = 12;
	inut* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	cout << ref << enndl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}