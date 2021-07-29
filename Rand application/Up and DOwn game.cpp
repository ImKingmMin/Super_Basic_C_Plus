#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int makeAnswerNumber();
void printWin(int);
void printLose(int &);

int main() {
	int answer = makeAnswerNumber();
	int x;  // 내가 예측한 값

	cout << "========= UP&DOWN GAME =========" << endl;
	cout << "Predict number<0^50> in 5 times!" << endl;
	cout << "================================" << endl;

	for (int i = 1; i <= 5; i++) {
		cout << "Player : ";
		cin >> x;
		if (i == 5) {
			printLose(answer);
		}
		else if (x == answer) { 
			printWin(x); 
			break;
		}
		else if (x > answer) {
			cout << "System : Down" << endl;
		}
		else if (x < answer) {
			cout << "System : Up" << endl;
		}
		
	}
	return 0;
}

int makeAnswerNumber() {
	srand(time(0));
	return rand() % 51;
}

void printWin(int x) {
	
	cout << "Player wins ! the answer is " << x << endl;
}

void printLose(int &x) {
	cout << "Player loses.. the answer was " << x << endl;
}
