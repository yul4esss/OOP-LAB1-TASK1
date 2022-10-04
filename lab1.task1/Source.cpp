#include <iostream>
#include <math.h>
using namespace std;

int func_B(float x, float y, float z) {
	float b1, b2, b3, b;
	b1 = (pow(fabs(y - x), 2)) / (pow(fabs(z - 1), 1.34));
	b2 = (pow((z - x), 2)) / (pow(sin(z), 2));
	b3 = (pow(fabs(y - z), 3)) / cos(y * y);
	b = 1 + b1 + b2 + b3;
	cout << "Function B: " << b << endl;
	return b;
}

void func_A(float x, float y, float z,int bi) {
	float a1, a2, a3, a4, a5, a;
	a1 = pow((x + y), 2);
	a2 = x + pow(z, 3);
	a3 = pow((pow(bi, 2) + y), 2);
	a4 = 1 + exp(-x + y) + pow(fabs(z), 0.34);
	a5 = a2 / a3;
	a = a1 + a5 / a4;
	cout << "Function A: " << a << endl;
	cout << "Example: " << endl;
}

int main() {

	float x, y, z;
	x = 1.44;
	y = 1.41;
	z = -3.96;

	int bi = func_B(x, y, z);

	func_A(x, y, z, bi);

	return 0;
}