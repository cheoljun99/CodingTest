#include <bits/stdc++.h>

using namespace std;

int N;
int original_board[21][21];
int copy_board[21][21];

void BoradRotate() { //copy_board를 시계 방향으로 90도 회전하는 함수
	int temp[21][21];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			temp[i][j] = copy_board[i][j];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			copy_board[i][j] = temp[N - 1 - j][i];// 그림으로 그려서 확인해보면됨
}

void MergeBlock(int dir) {
	while (dir--)
		BoradRotate();
	for (int i = 0; i < N; i++) {
		int merged[21] = {}; //copy_board[i]를 왼쪽으로 머지한 결과를 저장할 변수
		int idx = 0; // merged 배열에서 어디에 삽입해야 하는지 가리키는 변수
		for (int j = 0; j < N; j++) {
			if (copy_board[i][j] == 0) 
				continue;
			if (merged[idx] == 0)//삽입할 위치가 비어있을 경우
				merged[idx] = copy_board[i][j];
			else if (merged[idx] == copy_board[i][j])// 같은 값을 갖는 블록이 머지될 경우
				merged[idx++] *= 2;
			else //다른 값을 갖는 블록이 만난 경우
				merged[++idx] = copy_board[i][j];
		}
		for (int j = 0; j < N; j++) copy_board[i][j] = merged[j]; // copy_board[i]에 merged를 덮어씀
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> original_board[i][j];
	
	int ans = 0;
	for (int tmp = 0; tmp < 1024; tmp++) {
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				copy_board[i][j] = original_board[i][j];
		int brute = tmp;
		for (int i = 0; i < 5; i++) { //다섯번 실행
			int dir = brute % 4; // 상하좌우 4개 방향 정하기
			brute /= 4; // 다음 실행될 경우의 수의 방향을 구하기 위해
			//예를들어 1은 상 2는 하 3은 좌 4는 우 5는 상+상 6은 상+하 7은 상+좌 8은 상+우 9는 상+상+상....
			MergeBlock(dir); // 방향을 정한 이후 블록을 합쳐주기
		}
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				ans = max(ans, copy_board[i][j]);
	}
	cout << ans;
}