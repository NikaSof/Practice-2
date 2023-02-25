#include <iostream>
#include <cmath>
#include "Header1.h"

bool tringle::exst_tr(double a, double b, double c) {
	return ((a + b > c) && (a + c > b) && (b + c > a));
}
void tringle::set(double a1,double b1,double c1) {
	a = a1;
	b = b1;
	c = c1;
}
void tringle::show(double a, double b, double c) {
	std::cout << "1 �������: " << a << endl;
	std::cout << "2 �������: " << b << endl;
	std::cout << "3 �������: " << c << endl;
}
double tringle::perimetr(double a, double b, double c) {
	double P = a + b + c;
	return P;
}
double tringle::square(double a, double b, double c) {
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return S;
}