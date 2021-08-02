#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	~Circle();
	double getArea() { return 3.14*radius*radius; }
	void setRadius(int radius) { this->radius = radius; }
};

int main() {
	Circle circle;
	Circle &refc = circle;   // circle 객체에 대한 참조
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();
}


//-----------------------------------------------------------//

void swap(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int n = 2, m = 3;
	swap(n, m);
	cout << n << ' ' << m << endl;
}

//-------------------------------------------------------------//

void increase(Circle &c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle);        // 참조호출은 생성자, 소멸자 모두 호출 x  **이름만 생성된다 생각**
							
	cout << waffle.getRadius() << endl;
}

//---------------------------------------------------------//


