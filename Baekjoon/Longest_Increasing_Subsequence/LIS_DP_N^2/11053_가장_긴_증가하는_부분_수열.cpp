#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec(N);
	vector<vector<int>> DP(N);//Dynamic Programing O(N*N)

	for (int i = 0; i < N; i++) {
		cin >> vec[i]; 
		DP[i] = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (vec[i] > vec[j]) {
				DP[i] = max(DP[i], DP[j] + 1);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < N; i++) ans = max(ans, DP[i]);
	cout << ans;
	return 0;

}