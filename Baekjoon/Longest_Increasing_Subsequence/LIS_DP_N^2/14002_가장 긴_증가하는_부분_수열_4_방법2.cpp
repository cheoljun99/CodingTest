#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec(N);
	vector<int> dp(N);//Dynamic Programing O(N*N)
	vector<int> idx(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
		dp[i] = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (vec[i] > vec[j]) {
				if (dp[i] < dp[j]+1) {
					dp[i] = dp[j]+1;
				}
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		cnt = max(cnt, dp[i]);
	}
	cout << cnt << '\n';
	stack<int> st;
	for (int i = N - 1; i >= 0;i--) {
		if (dp[i] == cnt) {
			st.push(vec[i]);
			cnt--;
		}
	}
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}