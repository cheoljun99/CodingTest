#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>>table(N);
	vector<int>visited(N, 0);
	vector<int>result(N, 0);
	queue<int>q;
	for (int i = 0; i < N - 1; i++) {
		int u;
		int v;
		cin >> u>> v;
		table[u - 1].push_back(v - 1);
		table[v - 1].push_back(u - 1);
	}


	q.push(0);
	visited[0] = 1;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int i = 0; i < table[cur].size(); i++) {
			if (visited[table[cur][i]] == 0) {
				q.push(table[cur][i]);
				visited[table[cur][i]] = 1;
				result[table[cur][i]] = cur;
			}
		}

	}

	for (int i = 1; i < N; i++) {
		cout << result[i]+1 << '\n';
	}


}