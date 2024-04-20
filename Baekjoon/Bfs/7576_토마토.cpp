#include<bits/stdc++.h>
#define MAX 1005
#define X first
#define Y second

using namespace std;
int map_table[MAX][MAX];
int dist[MAX][MAX];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };

int N, M;
int day;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map_table[i][j];
		}
	}
	queue<pair<int, int>> q;

	for (int i = 0; i < N; i++) {
		for(int j = 0; j < M; j++) {
			if (map_table[i][j] == 1) {
				q.push({ i,j });
			}
			if (map_table[i][j] == 0) {
				dist[i][j] = -1;
			}
		}
	}

	while (!q.empty()) {
		pair<int, int> cur = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M)continue;
			if (dist[nx][ny]>-1)continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			q.push({nx,ny});
		}
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (dist[i][j]==-1) {
				cout << -1 << endl;
				return 0;
			}
			ans = max(ans, dist[i][j]);
		}
	}
	cout << ans << endl;
}