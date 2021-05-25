#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class SWINGmember {
private:
	int kisu;
	char* name;

public:
	SWINGmember();
	SWINGmember(int n, const char* name);
	SWINGmember(SWINGmember& origin);
	~SWINGmember();
	void info();
	void changeName(const char* name); //이름을 바꿔 주는 함수

};

SWINGmember::SWINGmember() {
}

SWINGmember::SWINGmember(int n, const char* name) { //매개변수 있는 생성자
	kisu = n;
	this->name = new char[7]; //이름을 문자열 배열로 설정해주기
	strcpy(this->name, name); //문자열 복사 함수, ','뒤의 문자열을 앞의 문자열로 복사->입력받은 매개변수를  name변수에 복사
	cout << "매개변수 있는 생성자 실행" << endl;
}

SWINGmember::SWINGmember(SWINGmember& origin) { //복사생성자 구현
	this->kisu = origin.kisu; //원본 객체의 기수
	int len = strlen(origin.name); //문자열 길이 반환 함수->원본객체의 이름 문자열 길이를 설정
	this->name = new char[len + 1]; 
	strcpy(this->name, origin.name); //원본객체의 이름을 name변수에 복사->피카츄
	cout << "복사생성자 실행. 원본 객체의 이름 : " << this->name << endl;
}

SWINGmember::~SWINGmember() {
	cout << name << "소멸(소멸자 실행)" << endl;
}

void SWINGmember::info() {
	cout << "SWING" << kisu << "기" << name << endl;
}

void SWINGmember::changeName(const char* name) {
	strcpy(this->name, name); //입력받은 값으로 이름을 변경해줌
}

int main() {
	SWINGmember a(29, "피카츄");
	SWINGmember b(a);
	a.info();
	b.info();
	b.changeName("라이츄");
	return 0;
