#include <bits/stdc++.h>
#define MAX 1005
#define X first
#define Y second

using namespace std;

char map_table[MAX][MAX];
int fire_dist[MAX][MAX];
int j_dist[MAX][MAX];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };


int R, C;
queue<pair<int, int>>Q;

int main() {

	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		fill(fire_dist[i],fire_dist[i] + C, -1);
		fill(j_dist[i], j_dist[i] + C, -1);
	}

	for (int i = 0; i < R; i++) {
		cin >> map_table[i];
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (map_table[i][j] == 'F') {
				Q.push({ i,j });
				fire_dist[i][j] = 0;
			}
		
		}
	}
	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || ny < 0 || nx >= R || ny >= C)continue;
			if (fire_dist[nx][ny] > -1|| map_table[nx][ny]=='#')continue;
			fire_dist[nx][ny] = fire_dist[cur.X][cur.Y] + 1;
			Q.push({nx,ny});
		}
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (map_table[i][j] == 'J') {
				Q.push({ i,j });
				j_dist[i][j] = 0;
			}
		}
	}

	//지훈이

	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || ny < 0 || nx >= R || ny >= C) {
				//범위를 벗어났다는 것은 탈출에 성공했다는 의미이고 큐에 거리 순으로 들어가므로 최초에 탈출한 시간을 출력하면 됨.
				cout << j_dist[cur.X][cur.Y] + 1;
				return 0;
			}
			if (j_dist[nx][ny]>-1 || map_table[nx][ny] == '#')continue;
			if (fire_dist[nx][ny]!=-1 && fire_dist[nx][ny] <= j_dist[cur.X][cur.Y] + 1)continue;
			j_dist[nx][ny] = j_dist[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
		}
	}

	cout << "IMPOSSIBLE";
	return 0;
}
