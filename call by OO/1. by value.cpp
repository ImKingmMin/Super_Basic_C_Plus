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

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle);        // 매개변수 객체의 생성자는 호출되지않음 !! But 복사 생성자와 소멸자는 호출됨 ! 
	                        // + call by value이기 때문에 main stack의 waffle의 값은 바뀌지않음.
							//만약 main에서의 값을 31로 바꾸고싶으면 call by reference 이용하면된다 ! 
	cout << waffle.getRadius() << endl;
}
