#include<iostream>
#include<string>
using namespace std;

int main()
{
	int rev = 0, i = 0, k = 0;//예약 유무, 배열 변수 선언
	int seats[3][10] = { 0 }; //3열 10행으로 0 출력

	while (1)//예약종료 전까지 반복
	{
		cout << "좌석을 예약하시겠습니까? (1또는 0) ";
		cin >> rev;
		cout << endl;

		if (rev == 1)
		{
			cout << "현재의 좌석은 다음과 같습니다." << endl; //좌석표 제시
			cout << "-------------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10 " << endl;
			cout << "-------------------------------------" << endl;

			for (k = 0; k < 3; k++) { //반복문으로 배열 출력
				for (i = 0; i < 10; i++) {
					cout << seats[k][i] << " ";
				}
				cout << endl;
			}
			int s1 = 0;
			int s2 = 0;
			cout << endl;
			cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?";
			cin >> s1;
			cin >> s2;
			cout << endl;

			if (seats[s1 - 1][s2 - 1] == 0)//인덱스 0 빼줌
			{
				cout << "예약되었습니다." << endl;
				seats[s1 - 1][s2 - 1] = 1; //선택된 자리는 1로 보이도록
				cout << "-------------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10 " << endl;
				cout << "-------------------------------------" << endl;
				for (int k = 0; k < 3; k++) {
					for (int i = 0; i < 10; i++) {
						cout << seats[k][i] << " ";
					}
					cout << endl;
				}
			}
			else//이미 예약된 자리선택 시
			{
				cout << "이미 예약된 자리입니다." << endl;
			}

		}
		else if (rev == 0)//좌석예약종료 시
		{
			cout << "좌석 예약 종료" << endl;
			break;
		}
			
		else//1,0이 아닌 숫자 입력했을 경우
		{
			cout << "1번 또는 0번만 입력하세요. " << endl;

		}
			
		

		

	}
	return 0;
}
