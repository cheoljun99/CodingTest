#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;

	cin >> N >> M;
	deque<int> dq;
	for (int i = 1; i <= N; i++) dq.push_back(i);
	int ans = 0;
	
	while (M--) {
		int num;
		cin >> num;
		int idx = find(dq.begin(), dq.end(), num)-dq.begin();
		while (dq.front() != num) {
			if (idx < dq.size() - idx) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
			else {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			ans++;
		}
		dq.pop_front();
	}
	cout << ans;
}