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
	friend Power operator+(int op1, Power op2);  // 왜인지는 모르겠는데 인수개수가 많아서 friend로 처리
};

void Power::show() {
	cout << "Kick = " << kick << "," << " Punch = " << punch << endl;
}

Power operator+(int op1, Power op2)
{
	Power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;
}

int main() {
	Power a(3, 5), b;

	a.show();
	b.show();
	b = 2 + a;
	a.show();
	b.show();

}

