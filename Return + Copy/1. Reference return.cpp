#include <iostream>
using namespace std;

char& find(char s[], int index) {           // 배열 s의 index번쨰 공간에 대한 참조를 리턴하는 함수 ! 
	return s[index];                        // s[index]공간에 대한 참조리턴
}

int main() {
	char name[] = "mike";
	cout << name << endl;

	find(name, 0) = 's';
	cout << name << endl;

	char&ref = find(name, 2);
	ref = 't';
	cout << name << endl;
}

//------------------------------------//

char c = 'a';
char&find() {           //char 타입의 참조리턴
	return c;          // 변수 c에 대한 참조리턴
}

char a = find();

char&ref = find();        // ref는 c에 대한 참조
ref = 'm'; // c='m'

find() = 'b'; // c= 'b'