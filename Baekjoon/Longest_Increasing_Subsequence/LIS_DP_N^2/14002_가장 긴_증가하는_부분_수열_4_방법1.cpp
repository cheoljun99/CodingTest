#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec(N);
	vector<vector<int>> dp(N);//Dynamic Programing O(N*N)

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (vec[i] > vec[j]) {
				if (dp[i].size() < dp[j].size() + 1) {
					dp[i] = dp[j];
				}
			}
		}
		dp[i].push_back(vec[i]);
	}
	int cnt = 0;
	int idx = 0;
	for (int i = 0; i < N; i++) {
		if (cnt < dp[i].size()) {
			cnt = dp[i].size();
			idx = i;
		}
	}
	cout << cnt<<'\n';
	for (auto i : dp[idx]) {
		cout << i << " ";
	}
	return 0;
}