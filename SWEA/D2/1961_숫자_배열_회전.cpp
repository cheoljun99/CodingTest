#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cout << "#" << i << "\n";
		int N;
		cin >> N;
		vector<vector<int>> vec(N, vector<int>(N));
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)cin >> vec[i][j];

		for (int i = 0; i < N; i++) {
			for (int j = N-1; j>=0; j--) {
				cout << vec[j][i];
			}
			cout << " ";
			for (int j = N - 1; j >= 0; j--) {
				cout << vec[N-i-1][j];
			}
			cout << " ";
			for (int j = 0; j< N; j++) {
				cout << vec[j][N-i-1];
			}
			cout << "\n";
		}
	}
}