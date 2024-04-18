#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int V, E, st,en; //����, ����, start point, end point


// {���, ���� ��ȣ}
vector<pair<int, int>> adj[1005];//���� ����(adjacent vertex):�ϳ��� �������� ������ ���� ���� ����� ����
const int INF = 1e9 + 10;
int d[1005];// �ִ� ��θ� ������ ���̺�
int pre[1005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> V >> E;
	fill(d, d + V + 1, INF);
	while (E--) {
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({ w,v });
	}
	cin >> st >> en;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
	d[st] = 0;
	// �켱���� ť�� (0, ������) �߰�
	pq.push({ d[st],st });
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
			pre[nxt.Y] = cur.Y;
		}
	}

	cout << d[en] << '\n';
	vector<int> path;
	int cur = en;
	while (cur != st) {//st�� ������ ���� path�� ��� �ֱ�
		path.push_back(cur);
		cur = pre[cur]; //cur ���� ������ ���� �ٽ� cur�� �����Ͽ� Ž�� 
	}
	path.push_back(cur);//st�� ����� �Ϻ��̹Ƿ� ����
	reverse(path.begin(), path.end());
	cout << path.size() << '\n';
	for (auto node : path)cout << node << ' ';
	return 0;
}

