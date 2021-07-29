#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define array_size 50

void make_random_number_array(int x[], int size_of_array);
int find_key_number(const int x[], int size_of_array, int key);
int ascending_sort(int x[], int size_of_array);

int main() {
	int random_number_array[array_size];
	int key_number = 0;

	make_random_number_array(random_number_array, array_size);

	cout << "0~15의 숫자로 이루어진 무작위 배열 : " << endl;
	for (int i = 0; i < array_size; i++) cout << random_number_array[i] << " ";

	cout << endl << "위 배열을 오름차순으로 정렬한 결과 : " << endl;
	ascending_sort(random_number_array, array_size);
	for (int i = 0; i < array_size; i++) cout << random_number_array[i] << " ";

	cout << endl << " Key number를 입력하라(0~15) : ";
	cin >> key_number;

	cout << "random number array에서 " << key_number << "의 개수는 : ";
	cout << find_key_number(random_number_array, array_size, key_number) << "개" << endl;

	return 0;
}

void make_random_number_array(int x[], int size_of_array)
{
	for (int i = 0; i < array_size; i++) {
		x[i] = rand() % 16;
	}
}

int find_key_number(const int x[], int size_of_array, int key)
{
	int count = 0;
	for (int i = 0; i < array_size; i++) {
		if (x[i] == key) count++;
	}
	return count;
}

int ascending_sort(int x[], int size_of_array)   // 그 자체로 pass by reference
{
	for (int t = 1; t < array_size; t++) {
		int insert = x[t];
		int time = t;
		
		while ((time > 0) && (x[time - 1] > insert)) {         // insertion sort -> 단순하지만(하나하나 일일히 비교) 비효율적 ! ! ! !
			x[time] = x[time - 1];

			time--;
		}
		x[time] = insert;
	}
	return 0;
}
