#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int V, E, st; //정점, 간선, starting point


// {비용, 정점 번호}
vector<pair<int, int>> adj[20005];//인접 정점(adjacent vertex):하나의 정점에서 간선에 의해 직접 연결된 정점
const int INF = 1e9 + 10;
int d[20005];// 최단 경로를 저장할 테이블

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> V >> E >> st;
	fill(d, d + V + 1, INF);
	while (E--) {
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({w,v});
	}

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
	d[st] = 0;
	// 우선순위 큐에 (0, 시작점) 추가
	pq.push({ d[st],st});
	while (!pq.empty()) {
		auto cur = pq.top(); pq.pop(); //{비용,정점번호}
		//거리가 table에 있는 값과 다를 경우 넘어감
		if (d[cur.Y] != cur.X) continue;
		for (auto nxt : adj[cur.Y]) {
			if (d[nxt.Y] <= d[cur.Y] + nxt.X) continue;
			//cur를 거쳐가는 것이 더 작은 값을 가질 경우
			// d[nxt.Y]를 갱신하고 우선순위 큐에 (거리,nxt.Y)를 추가
			d[nxt.Y] = d[cur.Y] + nxt.X;
			pq.push({ d[nxt.Y],nxt.Y });
		}
	}

	for (int i = 1; i <= V; i++) {
		if (d[i] == INF) cout << "INF\n";
		else cout << d[i] << "\n";
	}
}

