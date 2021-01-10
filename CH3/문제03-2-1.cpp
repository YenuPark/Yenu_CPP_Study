#include <iostream>
using namespace std;

class Calculator {
private:
	double result;
	int q, w, e, r;

public:
	void init();
	double Add(double a, double b);
	double Div(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	void ShowOpCount();
};

void Calculator::init() {
	q =0; 
	w = 0;
	e = 0;
	r = 0;
}

double Calculator::Add(double a, double b) {
		q += 1;
		return result = a + b;
}

double Calculator::Div(double a, double b) {
		w += 1;
		return result = a / b;		
}

double Calculator::Min(double a, double b) {
		e += 1;
		return result = a - b;		
}

double Calculator::Mul(double a, double b) {
		r += 1;
		return result = a * b;
}

void Calculator::ShowOpCount() {
		cout << "µ¡ : " << q << " ³ª : " << w << "¸¶ : " << e << " °ö : " << r << endl;
}

int main(void) {
	Calculator cal;
	cal.init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) <<endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();

}