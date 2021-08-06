#include <iostream>
using namespace std;

class Rect;            // RectŬ������ ����Ǳ� ���̱� ������ �����Ͽ�������

class RectManager {
public:
	bool equal(Rect r, Rect s);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool RectManager::equal(Rect r, Rect s);                  // �ٸ� Ŭ���� ����Լ��� friend�ϴ� ���
};

bool RectManager::equal(Rect r, Rect s) {         //����
	if (r.width == s.width&&r.height == s.height) return true;             
	else return false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager RectM;
	if (RectM.equal(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}