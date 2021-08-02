#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() :Circle(1) {}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << "원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

Circle globalDount(1000);
Circle globalPizza(2000);        // 전역객체( 먼저 생성 , 프로그램 종료시 역순으로 소멸 )

void f() {
	Circle mainDonut;
	Circle mainPizza(30);
}

int main() {
	Circle mainDonut;           // 지역객체 ( 전역객체 생성이후 생성, 함수 종료시 역순으로 소멸 )
	Circle mainPizza;
	f();
}