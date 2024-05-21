#include <bits/stdc++.h>

using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {

	if (a.second == b.second) {
		if (a.first.size() == b.first.size()) return (a.first < b.first);
		else return (a.first.size() > b.first.size());
	}
	else return a.second > b.second;
	
}
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<string, int> m;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str.size() >= M) {
			if (m.find(str) == m.end()) m.insert({ str,1 });
			else m[str]++;
		}
	}
	
	vector<pair<string, int>>vec(m.begin(),m.end());

	sort(vec.begin(), vec.end(), compare);

	for (auto i : vec) cout << i.first << '\n';

}