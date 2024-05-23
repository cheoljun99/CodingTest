#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		unordered_set<int>u_s;
		for (int i = 0; i < N; i++) {
			int num;
			cin >> num;
			u_s.insert(num);
		}
		int M;
		cin >> M;
		vector<int>vec(M, 0);
		for (int i = 0; i < M; i++) {
			int num;
			cin >> num;
			if (u_s.find(num) != u_s.end()) vec[i] = 1;

		}
		
		for (auto i : vec) cout << i << '\n';
	}
}