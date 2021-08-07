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
	Power operator++(int x);
};

void Power::show() {
	cout << "Kick = " << kick << "," << " Punch = " << punch << endl;
}

Power Power::operator++(int x) // 후위는 매개변수를 가져야함<암기>
{
	Power tmp = *this;       // 증가 이전의 객체 상태를 임시에 저장 
	kick++;
	punch++;
	return tmp;
}

int main() {
	Power a(3, 5), b(4, 6), c;

	a.show();
	b.show();
	b = a++;  // 연산순서 1. b = a  2. a++
	a.show();
	b.show();

}

