#include <iostream>

using namespace std;

int main() {

	int var = 1;
	cout << "Enter the number :" << endl;
	cin >> var;
	cout << endl;

	switch (var) {
	case 0 :
		cout << "Perfect" << endl;
		break;

	case 1:
		cout << "Perfect" << endl;
		break;
		
	default : 
		cout << "GO away" << endl;
		break;

	}

	return 0;
}