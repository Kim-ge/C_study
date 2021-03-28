#include<iostream>
#include<string>
using namespace std;

int main() {
	int a_price, b_price, o_price, a_number, b_number, o_number;

	cout << "당신의 이름은 무엇입니까?";
	char name[11];
	cin.getline(name,11,'\n');
	cout << "반갑습니다." << name << "님" << endl;
	cout << "apple의 가격은 얼마입니까?";
	cin >> a_price;
	cout << "banana의 가격은 얼마입니까?";
	cin >> b_price;
	cout << "orange의 가격은 얼마입니까?";
	cin >> o_price;
	cout << "apple은 몇 개 있습니까?";
	cin >> a_number;
	cout << "banana는 몇 개 있습니까?";
	cin >> b_number;
	cout << "orange는 몇 개 있습니까?";
	cin >> o_number;

	int total_price = (a_price * a_number + b_price * b_number + o_price * o_number) - 500;
	cout << "총" << total_price << "입니다";


}
