#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec(N);
	vector<int> LIS(N);//binary search O(NlogN) and lower_bound is a function that finds the index in an array using binary search.

	for (int i = 0; i < N; i++) cin >> vec[i];

	int len = 0;
	for (int i = 0; i < N; i++) {
		auto pos = lower_bound(LIS.begin(), LIS.begin() + len, vec[i]);
		*pos = vec[i];
		if (pos == LIS.begin() + len) len++;
	}
	cout << len;
	return 0;

}