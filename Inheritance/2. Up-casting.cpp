#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() { cout << x << ", " << y << endl; }
};

class ColorPoint : public Point {    // base class public지정
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << endl;
	showPoint();  // base class의 멤버함수 호출
}

int main() {
	ColorPoint cp;
	ColorPoint *pDer = &cp;
	Point *pBase = pDer;  // 업캐스팅 : 기본클래스 포인터->파생클래스의 객체

	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("red");
	pDer->showColorPoint();

	// pDer : 객체cp의 모든 Public멤버 접근 가능,   pBase : 기본클래스의 public멤버만 접근가능
}