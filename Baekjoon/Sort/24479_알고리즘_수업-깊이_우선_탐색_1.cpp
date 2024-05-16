#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100001]; //정적 vector<vector<int>> graph(100001); 동적
bool visited[100001];
int answer[100001];
int cnt = 0;
void dfs(int R) {
	if (visited[R] == true) {
		return;
	}
	visited[R] = true;
	cnt++;
	answer[R] = cnt;
	for (int i = 0; i < graph[R].size(); i++) {
		dfs(graph[R][i]);
	}

}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	int R;

	cin >> N >> M >> R;

	for (int i = 1; i <=M; i++) {
		int u;
		int v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	dfs(R);
	
	for (int i = 1; i <=N; i++) {
		cout << answer[i]<<"\n";
	}

}