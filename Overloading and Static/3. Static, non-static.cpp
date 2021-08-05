#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney;
	static void addsharedMoney(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10;

int main() {
	Person han;
	han.money = 100;
	han.sharedMoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addsharedMoney(200);

	cout << han.money << " " << lee.money << endl;
	cout << han.sharedMoney << " " << lee.sharedMoney << endl;
}