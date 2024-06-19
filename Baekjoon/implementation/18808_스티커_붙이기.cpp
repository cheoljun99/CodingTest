#include <bits/stdc++.h>

using namespace std;

int N, M, K;
int board[41][41];
int R, C;
int paper[11][11];

bool past_able_check(int x, int y) {
	for (int i = 0; i < R; i++) 
		for (int j = 0; j < C; j++) 
			if (board[x + i][y + j] == 1 && paper[i][j] == 1) 
				return false;
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			if (paper[i][j] == 1)
				board[x + i][y + j] = 1;
	return true;
}

void paper_rotate() {
	int temp[11][11];
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			temp[i][j] = paper[i][j];
	for (int i = 0; i < C; i++)
		for (int j = 0; j < R; j++)
			paper[i][j] = temp[R - 1 - j][i];
	
	int num = R;
	R = C;
	C = num;

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M >> K;
	while (K--) {
		cin >> R >> C;
		for (int i = 0; i < R; i++) 
			for (int j = 0; j < C; j++) 
				cin >> paper[i][j];
		for(int i=0;i<4;i++){
			//회전 방향 4개 0 90 180 270
			bool pasted_check = false;
			for (int x = 0; x <= N - R; x++) {
				if (pasted_check) 
					break;
				for (int y = 0; y <= M - C; y++) {
					if (past_able_check(x, y)) {
						pasted_check = true;
						break;
					}
				}
			}
			if (pasted_check) 
				break;
			paper_rotate();
		}
	}
	int cnt = 0;
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < M; j++) 
			cnt += board[i][j];
	cout << cnt;
}