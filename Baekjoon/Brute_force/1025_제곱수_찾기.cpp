#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;


int N,M;
int answer = -1;
int table[9][9];

int is_square(int num) {
	//제곱수 판단 및 반환

	int root = (int)sqrt(num);
	if (root * root == num) return num;
	else return -1;
}

int main() {

	cin >> N >> M;
	string input = "";

	for (int i = 0; i < N; i++) {
		cin >> input;
		for (int j = 0; j < M; j++) {
			table[i][j] = input[j] - '0';

		}
	}
	//table[i][j]가 등차수열의 시작점이라고 가정
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			//행의 공차와, 열의 공차를 구하는데, -인 경우도 구해야 한다.
			for (int common_difference_N = -N ; common_difference_N < N; common_difference_N++) {
				for (int common_difference_M = -M ; common_difference_M < M; common_difference_M++) {
					if (common_difference_N == 0 && common_difference_M == 0) //행과 열의 공차가 모두 0이면 무한루프에 빠지므로 이를 예외
						continue;
					int a = i;
					int b = j;
					int num = 0;
					while (a >= 0 && a < N && b >= 0 && b < M) {//해당 행과 열의 공차에서 나오는 수열의 모든 값을 검사
						num *= 10;
						num += table[a][b];
						answer = max(answer, is_square(num));
						a += common_difference_N;
						b += common_difference_M;
					}
				}
			}
		}
	}
	cout << answer;
}