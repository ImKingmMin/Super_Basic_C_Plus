#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { this->radius = radius; }  // this 포인터 -> 멤버변수의 이름과 매개변수의 이름이 같을때 유용!! !(덜 헷갈릴듯)
	~Circle(){}
	void setRadius(int radius) { this->radius = radius; }
	double getArea();
};

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main() {
	cout << "생성하고자 하는 원의 개수? ";
	int n, radius;
	cin >> n;

	Circle *pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "원 " << i+1 << "의 반지름 : ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	//Circle *p = pArray; // 이렇게 입력하고 p->getArea();로 입력해도 상관없음

	for (int i = 0; i < n; i++) {
		cout << pArray[i].getArea() << " ";
		if (pArray[i].getArea() >= 100 && pArray[i].getArea() <= 200) {
			count++;
		}
	}
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;

	Circle *p = pArray;

	delete[]pArray;
}