#include <iostream>
using namespace std;

class Rect;                   // RectŬ������ ����Ǳ����� ���� �����Ǵ� ������ ���� ������ ����
bool equal(Rect r, Rect s);  // equal �Լ� ����

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equal(Rect r, Rect s);             // �����Լ��� friend�ϴ� ����
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