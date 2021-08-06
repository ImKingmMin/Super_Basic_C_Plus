#include <iostream>
using namespace std;

class Rect;                   // Rect클래스가 선언되기전에 먼저 참조되는 컴파일 오류 방지를 위해
bool equal(Rect r, Rect s);  // equal 함수 선언

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equal(Rect r, Rect s);             // 전역함수를 friend하는 문법
};

bool equal(Rect r, Rect s) {
	if (r.width == s.width&&r.height == s.height) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equal(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}