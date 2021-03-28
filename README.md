#include<iostream>
#include<string> //string 클래스
using namespace std; //std::생략

int main() {
	int a_price, b_price, o_price, a_number, b_number, o_number;//입력받을 변수 선언

	cout << "당신의 이름은 무엇입니까?";
	char name[11];//한글 5자까지 입력가능
	cin.getline(name,11,'\n');//문자열 띄어쓰기 포함
	cout << "반갑습니다." << name << "님" << endl;
	cout << "apple의 가격은 얼마입니까?";//과일 가격 입력받기
	cin >> a_price;
	cout << "banana의 가격은 얼마입니까?";
	cin >> b_price;
	cout << "orange의 가격은 얼마입니까?";
	cin >> o_price;
	cout << "apple은 몇 개 있습니까?";//과일 개수 입력받기
	cin >> a_number;
	cout << "banana는 몇 개 있습니까?";
	cin >> b_number;
	cout << "orange는 몇 개 있습니까?";
	cin >> o_number;

	int total_price = (a_price * a_number + b_price * b_number + o_price * o_number) - 500;//과일 가격*과일 개수를 한 금액에서 500원을 할인해 총 금액 설정
	cout << "총" << total_price << "입니다";


}
