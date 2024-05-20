#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	cin >> N >> M;

	set<string> s;
	
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		s.insert(str);
	}
	
	set<string> ans;
	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		if (s.find(str) != s.end()) {
			ans.insert(str);
		}

	}
	cout << ans.size() << "\n";
	for (auto i : ans) {
		cout << i << '\n';
	}
	
	
}