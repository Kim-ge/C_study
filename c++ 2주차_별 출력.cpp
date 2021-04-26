#include<iostream>
using namespace std;

int main() {
	int input = 0;//입력
	cin >> input;

	for (int i = 1; i <= input; i++) { //입력값 크기만큼 for문 반복

		if (input% 2 == 0) { //입력값 짝수

			for (int k = 1; k <= input / 2; k++) { //짝수일 경우에는 첫 줄에 입력값을 2로 나눈 만큼의 별 출력
				cout << " * ";
			}

			cout << endl;
		}
		else //입력값 홀수
		{
			for (int k = 1; k <= input / 2 + 1; k++)//홀수일 경우에는 첫 줄에 입력값을 2로 나눈 몫에 1을 더한 개수만큼 출력
			{
				
				cout << " * ";
			}
			cout << endl;
		}
		cout << " ";//줄 띄우기-다음줄에 별 출력

        for (int k = 1; k <= input / 2; k++){ //if 문 끝나고 두번째 줄에 입력값을 2로 나눈 몫 만큼의 별 출력(짝수,홀수 동일)
			
			cout << " * ";
		}
		cout << endl;
	

	}
	return 0;
}
