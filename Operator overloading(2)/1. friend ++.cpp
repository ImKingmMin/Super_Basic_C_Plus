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
	friend Power& operator++(Power &op1);  
	friend Power operator++(Power& op2, int x);
};

void Power::show() {
	cout << "Kick = " << kick << "," << " Punch = " << punch << endl;
}

Power& operator++(Power &op)         // 리턴타입 power&는 return하는 객체에 따라 결정 op1(본객체) , 매개변수의 참조는 op의 값을 외부에서 직접 바꾸기때문에 필요함
{
	op.kick++;
	op.punch++;
	return op;
}

Power operator++(Power& op, int x)      // 리턴타입 power&는 return하는 객체에 따라 결정 tmp(임시객체), 매개변수의 참조는 op의 값을 외부에서 직접 바꾸기때문에 필요함
{
	Power tmp = op;     // 객체 치환
	op.kick++;
	op.punch++;
	return tmp;

}

int main() {
	Power a(3, 5), b;

	b = ++a;
	a.show();
	b.show();
	
	b = a++;
	a.show();
	b.show();

}

