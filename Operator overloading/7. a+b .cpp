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
	friend Power operator+(Power op1, Power op2);  // 왜인지는 모르겠는데 인수개수가 많아서 friend로 처리
};

void Power::show() {
	cout << "Kick = " << kick << "," << " Punch = " << punch << endl;
}

Power operator+(Power op1, Power op2)
{
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;
	return tmp;
}

int main() {
	Power a(3, 5), b(1, 2), c;

	a.show();
	b.show();
	c = a + b;
	a.show();
	b.show();
	c.show();

}

