#include<bits/stdc++.h>

using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = { 0, 0,1,-1 };


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		int M, N, K;
		cin >> M >> N >> K;
		vector<vector<int>>table(N, vector<int>(M, 0));
		vector<vector<int>>visited(N, vector<int>(M, 0));
		for (int i = 0; i < K; i++) {
			int X, Y;
			cin >> X >> Y;
			table[Y][X]=1;
		}
		int cnt = 0;
		queue<pair<int, int>>q;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (table[i][j] == 1 && visited[i][j] == 0) {
					q.push({ j,i });
					visited[i][j] = 1;
					cnt++;
					while (!q.empty()) {
						pair<int, int> cur = q.front();
						q.pop();
						for (int i = 0; i < 4; i++) {
							int nx = cur.first+dx[i];
							int ny = cur.second+dy[i];
							if (nx < 0 || nx >= M || ny < 0 || ny >= N)
								continue;
							if (table[ny][nx] == 0 || visited[ny][nx] == 1)
								continue;
							q.push({ nx, ny });
							visited[ny][nx] = 1;
						}
					}
				}
			}
		}
		cout << cnt<<'\n';

	}

}