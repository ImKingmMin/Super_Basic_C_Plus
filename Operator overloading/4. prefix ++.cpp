#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator++();
};

void Power::show() {
	cout << "Kick = " << kick << "," << " Punch = " << punch << endl;
}

Power& Power::operator++()  // 전위는 매개변수를 가지지않아도댐<암기>
{

	kick++;
	punch++;
	return *this;
}

int main() {
	Power a(3, 5), b(4, 6), c;

	a.show();
	b.show();
	++a;
	++b;
	a.show();
	b.show();

}

