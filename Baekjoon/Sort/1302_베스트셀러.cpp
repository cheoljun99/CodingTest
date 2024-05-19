#include <bits/stdc++.h>

using namespace std;

int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	map<string, int>m;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if(m.find(str)==m.end())
		m[str]++;
	}

	for (auto i : m) {
		cout << i.second <<endl;
	}
	
	int max = 0;
	string ans;
	for (auto i : m) {
		if (i.second >max) ans = i.first, max = i.second;
	}
	cout << ans;
}