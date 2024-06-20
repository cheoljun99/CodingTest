#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, w, L;
	cin >> n >> w >> L;

	vector<int>vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];


	int sum_weight=0;
	int pass_idx=0;
	queue<int>q;
	for (int i = 0; i < w; i++)
		q.push(0);

	int cnt = 0;
	while (!q.empty()) {
		sum_weight -= q.front();
		q.pop();
		if (pass_idx < vec.size()) {
			if (sum_weight + vec[pass_idx] <= L) {
				sum_weight += vec[pass_idx];
				q.push(vec[pass_idx]);
				pass_idx++;
			}
			else
				q.push(0);
		}
		cnt++;
	}
	cout << cnt;
}