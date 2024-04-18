#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int V, E, st; //����, ����, starting point


// {���, ���� ��ȣ}
vector<pair<int, int>> adj[20005];//���� ����(adjacent vertex):�ϳ��� �������� ������ ���� ���� ����� ����
const int INF = 1e9 + 10;
int d[20005];// �ִ� ��θ� ������ ���̺�

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
	// �켱���� ť�� (0, ������) �߰�
	pq.push({ d[st],st});
	while (!pq.empty()) {
		auto cur = pq.top(); pq.pop(); //{���,������ȣ}
		//�Ÿ��� table�� �ִ� ���� �ٸ� ��� �Ѿ
		if (d[cur.Y] != cur.X) continue;
		for (auto nxt : adj[cur.Y]) {
			if (d[nxt.Y] <= d[cur.Y] + nxt.X) continue;
			//cur�� ���İ��� ���� �� ���� ���� ���� ���
			// d[nxt.Y]�� �����ϰ� �켱���� ť�� (�Ÿ�,nxt.Y)�� �߰�
			d[nxt.Y] = d[cur.Y] + nxt.X;
			pq.push({ d[nxt.Y],nxt.Y });
		}
	}

	for (int i = 1; i <= V; i++) {
		if (d[i] == INF) cout << "INF\n";
		else cout << d[i] << "\n";
	}
}

