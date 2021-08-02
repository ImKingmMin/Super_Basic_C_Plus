#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main() {
	Circle circleArray[3] = { Circle(10),Circle(20), Circle(30) };  // 방식 1(생성자 선언정의 했을 시)

	//circleArray[0].setRadius(10);
	//circleArray[1].setRadius(20);      // 방식 2(객체 초기화방법으로 했을 때)
	//circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	}

	Circle *p;
	p = circleArray;
	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++; // 다음 객체 주소로 증가
	}
}