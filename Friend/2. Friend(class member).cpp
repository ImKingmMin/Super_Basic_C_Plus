#include <iostream>
using namespace std;

class Rect;            // Rect클래스가 선언되기 전이기 때문에 컴파일오류방지

class RectManager {
public:
	bool equal(Rect r, Rect s);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool RectManager::equal(Rect r, Rect s);                  // 다른 클래스 멤버함수를 friend하는 방법
};

bool RectManager::equal(Rect r, Rect s) {         //구현
	if (r.width == s.width&&r.height == s.height) return true;             
	else return false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager RectM;
	if (RectM.equal(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}