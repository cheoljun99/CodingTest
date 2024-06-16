#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<string>vec(N);

	for (int i = 0; i < N; i++) cin >> vec[i];
	

	int row = 0;
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (vec[i][j] == '.') cnt++;
			else cnt = 0;
			if (cnt == 2) {
				row++;
			}
		}
	}
	cout << row<<' ';

	int colum = 0;
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (vec[j][i] == '.') cnt++;
			else cnt = 0;
			if (cnt == 2) {
				colum++;
			}
		}
	}
	cout << colum;

}