#include <iostream>
using namespace std;

class Rect;            // Rect클래스가 선언되기 전이기 때문에 컴파일오류방지

class RectManager {
public:
	bool equal(Rect r, Rect s);
	void copy(Rect&dest, Rect &str);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager;        // 다른 클래스 friend
};

bool RectManager::equal(Rect r, Rect s) {         //구현
	if (r.width == s.width&&r.height == s.height) return true;
	else return false;
}

void RectManager::copy(Rect&dest, Rect&str) {
	dest.width = str.width;
	dest.height = str.height;
}

int main() {
	Rect a(3, 4), b(4, 5);
	RectManager RectM;

	RectM.copy(b, a);
	if (RectM.equal(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}