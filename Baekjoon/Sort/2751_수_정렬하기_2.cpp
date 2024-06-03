#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int>vec(N);
	for (int i = 0; i < N; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());

	for (auto i : vec) cout << i << '\n';

}