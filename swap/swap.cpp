#include <iostream>
#include "head.h"
using namespace std;


void main() {
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	cout << "before a = " << a << " b = " << b << endl;
	Swap(a, b); 
	cout << " after a = " << a << " b = " << b << endl;

	cout << "before c = " << c << " d = " << d << endl;
	Swap(c, d);
	cout << " after c = " << c << " d = " << d << endl;

	cout << "before e = " << e << " f = " << f << endl;
	Swap(e, f);
	cout << " after e = " << e << " f = " << f << endl;
}