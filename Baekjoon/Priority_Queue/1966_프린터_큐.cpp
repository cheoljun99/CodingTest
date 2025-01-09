#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testcase;
	cin >> testcase;
	while (testcase--) {
		int N;
		int idx;
		cin >> N >> idx;

		queue<pair<int, int>>q;
		priority_queue<int>pq;

		for (int i = 0; i < N; i++) {

			int imp;
			cin >> imp;
			q.push({ i,imp });
			pq.push(imp);
		}

		int cnt = 0;
		while (!q.empty()) {
			if (q.front().second == pq.top()) {
				if (q.front().first == idx) {
					cnt++;
					break;
				}
				q.pop();
				pq.pop();
				cnt++;
			}
			else {
				q.push({ q.front().first,q.front().second });
				q.pop();
			}
		}
		cout << cnt<<'\n';

	}
	
}