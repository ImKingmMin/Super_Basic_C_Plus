#include <iostream>
#include "h1.h"
using namespace std;

void main() {
	int x[10];
	int s, var;

	cout << "Enter 1 : generate the number" << endl;
	cout << "Enter 2 : see the array " << endl;
	cout << "Enter 3 : sum of the array" << endl;
	cout << "Enter 4 : find the number at the array" << endl;
	cout << "Enter 5 : Sort the array !" << endl;
	cout << "Enter 0 : quit this program" << endl;
	
	for (;;) {
		cin >> var;
		switch (var) {
		case 1:
			cout << "10 numbers are randomly generated\n";
			gen_arr(x);
			break;
		case 2:
			cout << "numbers are ";
			print_arr(x);
			break;
		case 3:
			s = arr_sum(x);
			cout << "The sum is " << s << " " << endl;
			break;
		case 4:
			cout << "Enter the number that you wanna find\n";
			cin >> s;
			s = find_number(s, x);
			if (-1 == s) {
				cout << "can't find that number!" << endl;
			}
			else cout << "The index of the number is " << s << endl;
			break;
		case 5: 
			cout << "Array is sorted ! " << endl;
			sort_arr(x);
		case 0: break;
		default: cout << "You chose a wrong option ! " << endl;

		}
		if (var == 0) break;
		
	}

}