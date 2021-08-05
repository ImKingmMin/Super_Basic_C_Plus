#include <iostream>
using namespace std;

class Myvector {
	int *p;
	int size;
public:
	Myvector(int n = 100) {
		p = new int[n];                   // 1. 디폴트를 이용한 간소화
		size = n;
	}

	/*Myvector() :Myvector(100){} */   // 2. 위의 것 혹은 위임생성자로 나타내는 간소화

	~Myvector() { delete[]p; }
};