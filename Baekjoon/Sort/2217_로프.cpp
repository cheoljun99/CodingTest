#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int>vec(N);
	for (int i = 0; i < N; i++) cin >> vec[i];

	sort(vec.begin(), vec.end(),greater<int>());

	int ans = 0;
	for (int i = 0; i < N; i++) {
		ans = max(ans, vec[i] * (i + 1));
	}
	cout << ans;

}