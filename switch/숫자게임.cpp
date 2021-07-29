#include <iostream>
#include <cstring>

using namespace std;

int main() {

	char nameofgame[20];
	int player,pnum;
	int cnum = 0;

	cout << "게임 이름 : ";
	cin.getline(nameofgame, 20, '\n');

	cout << "선공(0) 후공(1) ?" << endl;

	cin >> player;
	if (player == 0) {
		cout << "사용자 : ";
		cin >> pnum;

		if (pnum != 1) {
			cout << "컴퓨터 : ㅉㅉ 1부터 시작이라니까 ㅋㅋ";
		}
		else {
			while (1) {  // while 안에 1을 넣으면 무한루프
				
				if (pnum != cnum + 1) {
					cout << "컴퓨터 : ㅉㅉ " << cnum + 1 << "인뎅 메롱메롱 바보바보" << endl;
					break;
				}
				cnum = pnum + 1;
				cout << "컴퓨터 : " << cnum << endl;
				
				cout << "사용자 : "; cin >> pnum;
			}
		}
	}
	else if(player == 1) {
		cnum = 1;
		while (1) {
			cout << "컴퓨터 : " << cnum << endl;
			cout << "사용자 : "; cin >> pnum;
			if(pnum!=cnum+1) {
				cout << "컴퓨터 : ㅉㅉ " << cnum + 1 << "인뎅 메롱메롱 바보바보" << endl;
				break;
			}
			cnum = cnum + 2;
		}
	}

	return 0;
}
