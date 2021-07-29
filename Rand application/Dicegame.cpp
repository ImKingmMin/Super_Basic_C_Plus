#include <iostream>
#include <ctime> // time function
#include <cstdlib> // rand -> 예측 할 수 없는 규칙적인 난수 생성(**규칙적), srand ->  시간값을 매개로 초기화하면 일정하지않고 불규칙한 난수 생성! ! !

using namespace std;

int rolldice();

int rolldice() {
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;

	return sum;
}

int main() {

	enum status { draw, won, lost }; // enum은 데이터타입 status는 identifier(확장자 -> 클래스,상속에 나오는 개념)이다. draw = 0, won =1, lost = 2

	int mypoint;
	status gamestatus;  // 변수 생성

	srand(time(0)); // 초기화이후 불규칙한 난수를 생성하는 함수(time은 seed). 함수 괄호안에 어느 숫자는 넣어도 상관없음

	int sumofdice = rolldice();

	switch (sumofdice)
	{
	case 7:
	case 11:
		gamestatus = won;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lost;
		break;

	default:
		gamestatus = draw;
		mypoint = sumofdice;
		cout << "Point is " << mypoint << endl;
		break;
	}

	while (gamestatus == draw)
	{
		sumofdice = rolldice();
		if (sumofdice == mypoint) gamestatus = won;
		else if (sumofdice == 7) gamestatus = lost;

	}
	if (gamestatus == won) cout << "player wins " << endl;
	else cout << "player loses " << endl;

	return 0;

}
