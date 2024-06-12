#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec(N);
	vector<pair<int, int>> dp(N);//Dynamic Programing O(N*N)

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
		dp[i].first = 1;
		dp[i].second = -1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (vec[i] > vec[j]) {
				if (dp[i].first < dp[j].first + 1) {
					dp[i].first = dp[j].first + 1;
					dp[i].second = j;
				}
			}
		}
	}
	int cnt = 0;
	int idx = 0;
	for (int i = 0; i < N; i++) {
		if (cnt < dp[i].first) {
			cnt = dp[i].first;
			idx = i;
		}
	}
	cout << cnt << '\n';
	stack<int> st;
	st.push(vec[idx]);
	int num = dp[idx].second;
	while (num != -1) {
		st.push(vec[num]);
		num = dp[num].second;
	}
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}