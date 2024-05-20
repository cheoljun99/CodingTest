#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	map<long long, int>m;

	for (int i = 0; i < N; i++) {
		long long num;
		cin >> num;
		if (m.find(num) == m.end()) m.insert({ num,1 });
		else m[num]++;
	}

	int min = 0;
	long long ans = 0;
	for (auto i : m) {
		if (i.second > min) {
			min = i.second;
			ans = i.first;
		}
	}
	cout << ans;
}