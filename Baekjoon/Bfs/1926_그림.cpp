#include<bits/stdc++.h>
#define MAX 505
#define X first
#define Y second

using namespace std;
int map_table[MAX][MAX];
int visited[MAX][MAX];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};

int n, m;
int total_one_num=0;
int total_paint_num = 0;

void bfs(int cur_n, int cur_m) {
	int cnt = 1;
	queue<pair<int, int>> q;
	visited[cur_n][cur_m] = 1;
	q.push({cur_n,cur_m});

	while (!q.empty()) {
		pair<int, int> cur = q.front(); q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
			if (map_table[nx][ny] == 0 || visited[nx][ny] == 1)continue;
			cnt++;
			visited[nx][ny] = 1;
			q.push({nx,ny});
		}
	}
	total_one_num = max(total_one_num, cnt);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int num;
			cin >> num;
			map_table[i][j] = num;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map_table[i][j] ==1&&visited[i][j] == 0) {
				total_paint_num++;
				bfs(i, j);
			}
		}
	}
	cout << total_paint_num << endl;
	cout << total_one_num << endl;
}