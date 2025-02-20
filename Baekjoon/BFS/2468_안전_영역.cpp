#include<bits/stdc++.h>

using namespace std;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>>table(N, vector<int>(N, 0));
	vector<vector<int>>visited(N, vector<int>(N, 0));
	queue<pair<int,int>>q;

	for (int i=0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> table[i][j];
		}
	}
	int res = 0;

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j < N; j++) {
			fill(visited[j].begin(), visited[j].end(), 0);
		}
		/*for (int j = 0; j < N; j++) {
			memset(visited[j].data(), 0, sizeof(int) * N);
			//visited 초기화 방법2
		}*/

		/*fill(visited.begin(), visited.end(), vector<int>(N, 0));
			//visited 초기화 방법3 (재할당)
		*/
		/*visited.assign(N, vector<int>(N, 0));
			//visited 초기화 방법4 (재할당)
		*/

		int cnt = 0;
		for (int x = 0; x< N; x++) {
			for (int y = 0; y < N; y++) {
				if (table[x][y] > i&& visited[x][y]==0) {
					cnt++;
					q.push({ x,y });
					visited[x][y] = 1;
					while (!q.empty()) {
						auto cur = q.front();
						q.pop();
						for (int k = 0; k < 4; k++) {
							int nx = cur.first + dx[k];
							int ny = cur.second + dy[k];
							if (nx < 0 || ny < 0 || nx >= N || ny >= N)
								continue;
							if (table[nx][ny] <= i || visited[nx][ny] == 1)
								continue;
							q.push({ nx,ny });
							visited[nx][ny] = 1;
						}

					}

				}
				else {
					continue;
				}
			}
		}
		if (cnt > res)
			res = cnt;
	}
	cout << res;
}