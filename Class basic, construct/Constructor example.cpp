//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width, height;
//
//	Rectangle();
//	Rectangle(int w, int h);
//	Rectangle(int l);
//	bool isSquare();
//};
//
//Rectangle::Rectangle() : Rectangle(0,0){}
//
//Rectangle::Rectangle(int w, int h)
//{
//	width = w;
//	height = h;
//}
//
//Rectangle::Rectangle(int l)
//{
//	width = height = l;
//}
//
//int main() {
//	Rectangle rect1;
//	Rectangle rect2(3,5);
//	Rectangle rect3(3);
//
//	if (rect1.isSquare())  cout << "rect1은 정사각형이다. " << endl;
//	if (rect2.isSquare())  cout << "rect2은 정사각형이다. " << endl;
//	if (rect3.isSquare())  cout << "rect3은 정사각형이다. " << endl;
//}
//
//
//
//bool Rectangle::isSquare()
//{
//	if (width == height) return true;
//	else return false;
//}
