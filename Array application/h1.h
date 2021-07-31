#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

void gen_arr(int a[10])
{
	int i;
	for (i = 0; i < 10; i++) {
		a[i] = rand() % 21;
	}
}

void print_arr(int b[10])
{
	int i;
	for (i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

}

inline void Swap(int * const e1, int * const e2)
{
	int temp = *e1;
	*e1 = *e2;
	*e2 = temp;
}

inline void sort_arr(int k[10])
{
	int smallest;

	for (int i = 0; i < 10; i++) {
		smallest = i;
		for (int index = i + 1; index < 10; index++) {
			if (k[index] < k[smallest]) smallest = index;
		}
		Swap(&k[i], &k[smallest]);
	}
}

int arr_sum(int c[10])
{
	int i,s;
	s = 0;
	for (i = 0; i < 10; i++) {
		s = s + c[i];
	}
	return s;
}

inline int find_number(int s, int d[10])
{
	for (int i = 0; i < 10; i++) {
		if (d[i] == s) return d[i];
	}
	return -1;
}
