#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> price(N);
	vector<int> sum(N);// using Dynamic Programming

	for (int i = 0; i < N; i++) {
		cin >> price[i];
		sum[i] = price[i];
	}

	for (int i = 0; i < N; i++) {
		int num = price[i];
		for (int j = 0; j < i; j++) {
			if (price[i] > price[j]) {
				sum[i] = max(sum[i], sum[j] + num);
			}
		}
	}

	int ans = 0;
	for (auto i : sum) ans = max(ans, i);
	cout << ans;

	return 0;
}