#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
	int fq1 = 0;
	int fq2 = 0;
	int fq3 = 0;
	int fq4 = 0;
	int fq5 = 0;
	int fq6 = 0;

	int face;

	for (int i = 1; i <= 20000; i++) {
		face = 1 + rand() % 6;

		switch (face)
		{
		case 1:
			++fq1; break;
		case 2:
			++fq2; break;
		case 3:
			++fq3; break;
		case 4:
			++fq4; break;
		case 5:
			++fq5; break;
		case 6:
			++fq6; break;
		default:
			cout << "Program run ends now " << endl;
		}
	}

	cout << "Face" << setw(10) << "Frequency" << endl;
	cout << "   1" << setw(10) << fq1 << endl;
	cout << "   2" << setw(10) << fq2 << endl;
	cout << "   3" << setw(10) << fq3 << endl;
	cout << "   4" << setw(10) << fq4 << endl;
	cout << "   5" << setw(10) << fq5 << endl;
	cout << "   6" << setw(10) << fq6 << endl;

	return 0;
}