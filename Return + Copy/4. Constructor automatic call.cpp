#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char*name;
	int id;
public:
	Person(int id, const char*name);     
	Person(Person &person);         
	~Person();
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char * name)
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; 
	strcpy(this->name, name);       
	cout << "기본생성자 실행 ! " << endl;
}

Person::Person(Person & person)
{
	this->id = person.id;
	int len = strlen(person.name);                               
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}


Person::~Person()
{
	if (name) delete[]name;      
	cout << "소멸자 실행" << endl;
}

void Person::changeName(const char * name)
{
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}

void f(Person person) {
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;
}

int main() {
	Person father(1, "Kitae");  // 기본 생성자 호출
	Person son = father;     // 객체 치환 -> 기본생성자 X, 복사생성자, 소멸자 전부 호출
	f(father);    // 객체를 매개변수로 쓰는경우 -> 복사 생성자 호출, 함수 종료시 바로 소멸자호출
	son.show();
	g();                     // 객체리턴 -> 생성자, 복사생성자 ,소멸자 전부 호출

	return 0;                  // 리턴시 mother, son, father
}

