#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char*name;
	int id;
public:
	Person(int id, const char*name);     // 생성자
	Person(Person &person);           // 복사생성자
	~Person();
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char * name)
{
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1]; //name문자열 공간할당
	strcpy(this->name, name);         // name공간에 문자열 복사
}

Person::Person(Person & person)
{
	this->id = person.id;
	int len = strlen(person.name);                                // 복사생성자(깊은 복사 new사용-> 메모리 할당 해줌)
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}


Person::~Person()
{
	if (name) delete[]name;      // name 메모리 반환
}

void Person::changeName(const char * name)
{
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);  // 복사생성자 호출 -> 깊은 복사 시행

	cout << "Daughter 객체 생성 직후______" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "Daughter 객체의 문자열을 Grace로 변경 직후 -----" << endl;
	father.show();
	daughter.show();

	return 0;                  // 리턴시 daughter, father 순
}

