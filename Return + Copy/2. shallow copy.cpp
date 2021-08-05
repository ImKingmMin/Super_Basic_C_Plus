#define _CRT_SECURE_NO_WARNINGS    // strcpy로 인한 오류를 막기위한 정의
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char*name;
	int id;
public:
	Person(int id, const char*name);     // 생성자

	/*Person(const Person &Person) {
		this->id = person.id;                         디폴트 복사 생성자(얕은 복사!!)
		this->name = person.name;
	}*/

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
	Person daughter(father);  // 복사생성자 호출 -> 정의를 안해뒀음 ->  디폴트 복사 생성자 호출(shallow copy로 접근 !) 

	cout << "Daughter 객체 생성 직후______" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "Daughter 객체의 문자열을 Grace로 변경 직후 -----" << endl;
	father.show();
	daughter.show();

	return 0;                  // 리턴시 daughter, father 순  But 메모리의 소멸이 2번 일어나기때문에 오류발생 !! 
}
