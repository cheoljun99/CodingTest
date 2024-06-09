#include <bits/stdc++.h>

using namespace std;

int price[10001];
int LIS[10001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N, K;
		cin >> N >> K;
		for (int i = 0; i < N; i++) cin >> price[i];
		int len = 0;
		for (int i = 0; i < N; i++) {
			auto pos = lower_bound(LIS, LIS + len, price[i]);
			*pos = price[i];
			if (pos == LIS + len) len++;
		}
		cout << "Case #" << i << '\n';
		if (len >=K) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
}