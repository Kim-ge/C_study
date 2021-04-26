#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int* ptr_a = &a; //타입,포인터 이름, 포인터 초기화

	cout << "변수 a의 주소는 : " << ptr_a << endl;
	cout << "a의 값은 : " << *ptr_a << endl;

	return 0;

}
