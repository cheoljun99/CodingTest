#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int>b) {

	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	vector<pair<int, int>> vec(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i].first;
		cin >> vec[i].second;
	}

	sort(vec.begin(), vec.end(),compare);

	int cur_time = 0;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (vec[i].first >= cur_time) {
			cur_time = vec[i].second;
			cnt++;
		}
	}
	cout << cnt;
}