#include<bits/stdc++.h>
#define MAX 105
#define X first
#define Y second
#define Z third

using namespace std;
int map_table[MAX][MAX][MAX];
int dist[MAX][MAX][MAX];
int dx[6] = { 1,-1,0,0,0,0 };
int dy[6] = { 0,0,1,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

int N, M, H;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> M >> N >> H;
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> map_table[i][j][k];
			}
		}

	}

	queue<tuple<int, int, int>> q;
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (map_table[i][j][k] == 1) {
					q.push({ i,j,k});
				}
				if (map_table[i][j][k] == 0) {
					dist[i][j][k] = -1;
				}
			}
		}
	}

	while (!q.empty()) {
		tuple<int, int, int> cur = q.front(); q.pop();
		int curX, curY, curZ;
		tie(curX, curY, curZ) = cur;
		for (int i = 0; i < 6; i++) {
			int nx = curX + dx[i];
			int ny = curY + dy[i];
			int nz = curZ + dz[i];
			if (nx < 0 || ny < 0 || nz < 0 || nx >= N || ny >= M||nz >= H)continue;
			if (dist[nx][ny][nz] > -1)continue;
			dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
			q.push({ nx,ny,nz });
		}
	}

	int ans = 0;
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (dist[i][j][k] == -1) {
					cout << -1 << endl;
					return 0;
				}
				ans = max(ans, dist[i][j][k]);
			}
		}
	}
	cout << ans << endl;
}