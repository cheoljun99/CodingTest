#include<bits/stdc++.h>
#define MAX 505
#define X first
#define Y second

using namespace std;
int map_table[MAX][MAX];
int dist[MAX][MAX];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };

int N, M;

void bfs(int cur_n, int cur_m) {
	int cnt = 1;
	queue<pair<int, int>> q;
	dist[cur_n][cur_m] = 0;
	q.push({ cur_n,cur_m });
	while (!q.empty()) {
		pair<int, int> cur = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M)continue;
			if (map_table[nx][ny] == 0 || dist[nx][ny] >-1)continue;
			cnt++;
			dist[nx][ny] = dist[cur.X][cur.Y]+1;
			q.push({ nx,ny });
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string num;
		cin >> num;
		for (int j = 0; j < M; j++) {
			map_table[i][j] = num[j]-'0';
		}
	}
	for (int i = 0; i < N; i++)fill(dist[i], dist[i] + M, -1);

	bfs(0,0);
	cout << dist[N-1][M-1]+1<< endl;
}