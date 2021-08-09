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
	ColorPoint *pDer;
	Point *pBase= &cp;  // 업캐스팅 : 기본클래스 포인터->파생클래스의 객체

	pDer = (ColorPoint *)pBase; // 다운캐스팅 :  기본클래스 포인터(강제 타입변환)->파생클래스 포인터
	pDer->setColor("Red");
	pDer->showColorPoint();
}