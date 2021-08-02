#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() :Circle(1) {}

Circle::Circle(int r)
{
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << "�� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;   // �Ű��������� ������ ȣ��
	double area = donut.getArea();
	cout << "Donut ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "Pizza ������ " << area << endl;
}