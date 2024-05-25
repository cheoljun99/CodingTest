#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int>vec(N + 1, 0);
	for (int i = 1; i <= N; i++)cin >> vec[i];

	sort(vec.begin(), vec.end());

	long long ans = 0;
	for (int i = 1; i <= N; i++)  ans += abs(vec[i]-i);

	cout << ans;
	
}