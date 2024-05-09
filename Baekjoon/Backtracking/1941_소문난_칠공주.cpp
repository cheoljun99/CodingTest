#include <bits/stdc++.h>

using namespace std;

bool com_mask[25];
string board[5];
int ans;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 5; i++)
		cin >> board[i];

	fill(com_mask + 7, com_mask + 25, true); //25명중 7명을 뽑아 칠공주가 될 후보 조합을 선택 25C7 = 480,700의 경우의 수가 있음 3억번이 1초라면 충분히 가능

	do {
		queue<pair<int, int>>q;// x,y
		int dasom_num = 0, adj_num = 0;// 다솜수와 인접한 사람수이며 다솜수는 4이상이여야하고 인접수는 7이어야한다.
		bool somoon7[5][5] = {}, visited[5][5] = {}; // 소문난 칠공주 후보의 위치를 저장할 테이블, 탐색할 때 방문표시 테이블
		for (int i = 0; i < 25; i++) {
			if (!com_mask[i]) {
				int x = i / 5;
				int y = i % 5;
				somoon7[x][y] = true;
				if (q.empty()) {
					q.push({ x,y });
					visited[x][y] = true;
				}
			}
		}
		while (!q.empty()) {
			int x, y;
			tie(x, y) = q.front();
			q.pop();
			adj_num++;
			if (board[x][y] == 'S')
				dasom_num++;
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || visited[nx][ny] || !somoon7[nx][ny])
					continue;
				q.push({ nx,ny });
				visited[nx][ny] = true;
			}
		}
		if (adj_num == 7 && dasom_num >= 4)
			ans++;
	} while (next_permutation(com_mask, com_mask + 25));
	cout << ans;
}