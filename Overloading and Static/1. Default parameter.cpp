#include <iostream>
using namespace std;

void f(char c = ' ', int size = 1);

void f(char c, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 10; j++) {
			cout << c;
		}
		cout << endl;
	}
}


int main() {
	f();      // 디폴트일때 빈칸을 한줄 !
	f('%');   // %를 한줄!
	f('@', 5); //@를 다섯줄!
}

