#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	virtual void f() { cout << "Derived::f() called" << endl; }
};

int main() {
	Derived d, *pDer;
	pDer = &d;
	pDer->f();   // Derived f() 호출

	Base *pBase;
	pBase = pDer;  // Up-casting : 기본클래스가 파생클래스를 가리키는것
	pBase->f();  // 동적바인딩으로 인해 Derived f()호출
}