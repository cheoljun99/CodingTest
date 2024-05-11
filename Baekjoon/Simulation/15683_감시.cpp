#include <bits/stdc++.h>

using namespace std;

int N, M;
int CCTV_table[15][3];
int used[15];
int board[8][8];
int CCTV_num=0;
int ans = 64;

//1번 4
//2번 2
//3번 4
//4번 4
//5번 1

void monitor(int CCTV_N, int CCTV_M, int CCTV_chr, int direction, int back) {
	if (CCTV_chr == 1) {
		if (!back) {
			if (direction == 1) {//아래
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				return;
			}
			else if(direction == 2) { //위
				for (int i = CCTV_N; i >=0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				return;
			}
			else if (direction == 3) { //오른쪽
				for (int i = CCTV_M; i< M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
			else if (direction == 4) { //왼쪽
				for (int i = CCTV_M; i >=0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
		}
		else {
			if (direction == 1) {//아래
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				return;
			}
			else if (direction == 2) { //위
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				return;
			}
			else if (direction == 3) { //오른쪽
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
			else if (direction == 4) { //왼쪽
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
		}
	}
	else if (CCTV_chr == 2) {
		if (!back) {
			if (direction == 1) {
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				return;

			}
			else if (direction == 2) {
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
		}
		else {
			if (direction == 1) {
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				return;

			}
			else if (direction == 2) {
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
		}
	}
	else if (CCTV_chr == 3) {
		if (!back) {
			if (direction == 1) {
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
			else if (direction == 2) {
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
			else if (direction == 3) {
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
			else if (direction == 4) {
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
		}
		else {
			if (direction == 1) {
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
			else if (direction == 2) {
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
			else if (direction == 3) {
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
			else if (direction == 4) {
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
		}
	}
	else if (CCTV_chr == 4) {
		if (!back) {
			if (direction == 1) {
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
			else if (direction == 2) {
				//위
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				//아래
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				//왼쪽
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
			else if (direction == 3) {
				//위
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				//아래
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				//오른쪽
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
			else if (direction == 4) {
				//아래
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]--;
				}
				//오른쪽
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				//왼쪽
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]--;
				}
				return;
			}
		}
		else {
			if (direction == 1) {
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
			else if (direction == 2) {
				//위
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				//아래
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				//왼쪽
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
			else if (direction == 3) {
				//위
				for (int i = CCTV_N; i >= 0; i--) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				//아래
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				//오른쪽
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
			else if (direction == 4) {
				//아래
				for (int i = CCTV_N; i < N; i++) {
					if (board[i][CCTV_M] == 6) break;
					board[i][CCTV_M]++;
				}
				//오른쪽
				for (int i = CCTV_M; i < M; i++) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				//왼쪽
				for (int i = CCTV_M; i >= 0; i--) {
					if (board[CCTV_N][i] == 6) break;
					board[CCTV_N][i]++;
				}
				return;
			}
		}
	}
	else if (CCTV_chr == 5) {
		if (!back) {
			//아래
			for (int i = CCTV_N; i < N; i++) {
				if (board[i][CCTV_M] == 6) break;
				board[i][CCTV_M]--;
			}
			//위
			for (int i = CCTV_N; i >= 0; i--) {
				if (board[i][CCTV_M] == 6) break;
				board[i][CCTV_M]--;
			}
			//오른쪽
			for (int i = CCTV_M; i < M; i++) {
				if (board[CCTV_N][i] == 6) break;
				board[CCTV_N][i]--;
			}
			//왼쪽
			for (int i = CCTV_M; i >= 0; i--) {
				if (board[CCTV_N][i] == 6) break;
				board[CCTV_N][i]--;
			}
			return;
		}
		else {
			//아래
			for (int i = CCTV_N; i < N; i++) {
				if (board[i][CCTV_M] == 6) break;
				board[i][CCTV_M]++;
			}
			//위
			for (int i = CCTV_N; i >= 0; i--) {
				if (board[i][CCTV_M] == 6) break;
				board[i][CCTV_M]++;
			}
			//오른쪽
			for (int i = CCTV_M; i < M; i++) {
				if (board[CCTV_N][i] == 6) break;
				board[CCTV_N][i]++;
			}
			//왼쪽
			for (int i = CCTV_M; i >= 0; i--) {
				if (board[CCTV_N][i] == 6) break;
				board[CCTV_N][i]++;
			}
			return;
		}
	}
}
void simulation(int idx) {
	if (idx == CCTV_num) {
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (board[i][j] == 0)cnt++;
			}
		}
		ans = min(ans, cnt);
		return;
	}
	if (CCTV_table[idx][2] == 1) {
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 1, 1, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 1, 1, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 1, 2, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 1, 2, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 1, 3, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 1, 3, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 1, 4, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 1, 4, 1);
	}
	else if (CCTV_table[idx][2] == 2) {
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 2, 1, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 2, 1, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 2, 2, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 2, 2, 1);
	}
	else if (CCTV_table[idx][2] == 3) {
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 3, 1, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 3, 1, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 3, 2, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 3, 2, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 3, 3, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 3, 3, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 3, 4, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 3, 4, 1);
	}
	else if (CCTV_table[idx][2] == 4) {
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 4, 1, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 4, 1, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 4, 2, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 4, 2, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 4, 3, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 4, 3, 1);

		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 4, 4, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 4, 4, 1);
	}
	else if (CCTV_table[idx][2] == 5) {
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 5, 1, 0);
		simulation(idx + 1);
		monitor(CCTV_table[idx][0], CCTV_table[idx][1], 5, 1, 1);
	}
}


int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			if (board[i][j] > 0 && board[i][j] < 6) {
				CCTV_table[CCTV_num][0] = i;
				CCTV_table[CCTV_num][1] = j;
				CCTV_table[CCTV_num][2] = board[i][j];
				board[i][j] = 0;
				CCTV_num++;
			}
		}
	}
	simulation(0);
	cout << ans;
}