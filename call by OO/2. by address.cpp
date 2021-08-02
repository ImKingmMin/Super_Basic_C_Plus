#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14*radius*radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius)
{
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()
{
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle *p) {
	int r = p->getRadius();
	p->setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(&waffle);          // call by address시에는 함수호출시 생성자, 소멸자가 실행되지 않는다 !! 
	                            // 오로지 객체의 주소만 전달 !
	cout << waffle.getRadius() << endl;
}
