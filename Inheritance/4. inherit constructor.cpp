#include<iostream>
#include<string>
using namespace std;

class TV {
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getsize() { return size; }
};

class WideTV :public TV {
	bool videoln;
public:
	WideTV(int size, bool videoln) : TV(size) {
		this->videoln = videoln;
	}
	bool getvideoln() { return videoln; }
};

class SmartTV :public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAdder, int size) : WideTV(size, true) {
		this->ipAddr = ipAdder;
	}
	string getipAddr() { return ipAddr; }
};


int main() {
	SmartTV htv("192.0.0.1", 32);      //    wideTv 생성자 호출-> Tv생성자 호출 -> Tv생성자 실행 -> wideTV 생성자 실행
	cout << "size = " << htv.getsize() << endl;
	cout << "videoln = " << boolalpha << htv.getvideoln() << endl;  // boolalpha  0,1을 true or false로 출력해주는 명령어! 
	cout << "IP = " << htv.getipAddr() << endl;
}