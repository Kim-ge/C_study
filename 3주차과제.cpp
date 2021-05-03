#include <iostream>
#include <string.h>

using namespace std;

void myaccounts(string* bank_name, int* bank) //계좌별 금액 출력 함수
{
	int i; //반복문 변수
	cout << "********************SWING 자산관리 서비스********************" << endl;
	cout << "=====================은행 별 계좌정보========================" << endl;
	for (i = 0; i < 4; i++) //배열에 저장된 4개의 은행정보 처음부터 출력
	{
		cout << bank_name[i] << " | ";
	}
	cout << endl;
	cout << "5000 | "; //계좌잔액 출력
	cout << "4000 | ";
	cout << "계좌없음 | ";
	cout << "10 |";
	cout << endl;
	cout << "=============================================================" << endl;
}

void total(int* bank, int* total_money)//계좌금액 총합 함수 
{
	int i;
	int total = 0; //총합 저장할 변수
	for (i = 0; i < 4; i++)
	{
		total += bank[i]; //배열의 첫 번째 요소부터 값을 더해줌
	}
	*total_money = total; //main함수의 total_money 변수에 total값을 할당
}

int main()
{
	string bank_name[4] = { "하나", "우리", "신한", "국민" }; //배열개수는 항상 +1해서 설정
	int bank[4] = { 5000, 4000, 0, 10 };
	int total_money = 0;

	myaccounts(bank_name, bank); //계좌별 금액 출력 함수 호출
	total(bank, &total_money); //계좌금액 총합 함수 호출

	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은 " << total_money << "원 입니다." << endl;
	cout << "*************************************************************" << endl;

	return 0;
}
