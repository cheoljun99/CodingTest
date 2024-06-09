#include <bits/stdc++.h>

using namespace std;

int price[10001];
int dp[10001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for(int i=1;i<=T;i++){
		int N, K;
		cin >> N >> K;
		for (int i = 0; i < N; i++) {
			cin >> price[i];
			dp[i] = 1;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < i; j++) {
				if (price[i] > price[j]) dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		int ans = 0;
		for (int i = 0; i < N; i++) {
			if (dp[i] == K) {
				ans = 1;
				continue;
			}
		}
		cout << "Case #" << i << '\n';
		if (ans == 1) cout << 1<<'\n';
		else cout << 0 << '\n';
	}
}