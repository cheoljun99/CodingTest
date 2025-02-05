#include<bits/stdc++.h>

using namespace std;
int arr[101][101];
int visited[101];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int E;
	cin >> E;

	for (int i = 0; i < E; i++) {
		int u, v;
		cin >> u >> v;
		arr[u][v] = 1;
		arr[v][u] = 1;

	}
	queue<int> q;
	q.push(1);
	visited[1] = 1;

	while (!q.empty()) {
		int next = q.front();
		q.pop();

		for (int i = 1; i <= N; i++) {
			if (arr[next][i] == 1 && visited[i] == 0) {
				q.push(i);
				visited[i] = 1;
			}
		}
	}
	int cnt=0;
	for (int i = 2; i <= N; i++) {
		if (visited[i] == 1)
			cnt++;
	}
	cout << cnt;


}