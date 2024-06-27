#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int digit=1;
	int cnt = 1;
	int ans = 0;
	while (N - (9 * digit) >= 0) {
		N = N - (9 * digit);
		ans += 9 * digit * cnt;
		digit *= 10;
		cnt++;
	}
	if (N != 0) {
		ans += N * cnt;
	}
	cout << ans;
}