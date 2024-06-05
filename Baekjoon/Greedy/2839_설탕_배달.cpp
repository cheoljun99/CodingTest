#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;

	int ans = 0;

	while (N > 0) {
		if (N % 5 == 0) {
			ans += (N / 5);
			N = N % 5;
		}
		else {
			ans++;
			N = N - 3;
		}
	}

	if (N == 0) cout << ans;
	else cout << -1;
}