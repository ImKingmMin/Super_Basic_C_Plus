#include <iostream>
#include <iomanip>
using namespace std;

void selectionsort(int *const, const int);
void swap(int *const, int *const);

int main() {
	const int arraysize = 10;
	int a[arraysize] = { 2,6,4,8,9,10,12,89,68,45 };

	cout << "Data items in original order /n";

	for (int i = 0; i < arraysize; i++) {
		cout << setw(4) << a[i];
	}
	
	selectionsort(a, arraysize);

	cout << endl << "/nData items in ascending order /n";

	for (int j = 0; j < arraysize; j++) {
		cout << setw(4) << a[j];
	}
	cout << endl;

	return 0;
}

void selectionsort(int * const array, const int size)
{
	int smallest;

	for (int i = 0; i < size - 1; i++) {
		smallest = i;

		for (int index = i + 1; index < size; index++) {
			if (array[index] < array[smallest]) smallest = index;
		}
		swap(&array[i], &array[smallest]);
	}
}

void swap(int * const e1, int * const e2)
{
	int hold = *e1;
	*e1 = *e2;
	*e2 = hold;
}
