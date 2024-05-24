#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int>vec(N + 1, 100001);
	for (int i = 1; i <= N; i++)cin >> vec[i];

	sort(vec.begin(), vec.end(),greater<int>());

	long long ans = 0;
	for (int i = 1; i <= N; i++) if (vec[i] - (i - 1) > 0) ans += vec[i] - (i - 1);

	cout << ans;
	
}