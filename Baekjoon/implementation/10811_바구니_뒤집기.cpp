#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;

	vector<int>vec(N+1);
	for (int i = 1; i <=N; i++) vec[i] = i;

	for (int k = 0; k < M; k++) {
		int i, j;
		cin >> i >> j;
		while (i < j) {
			int temp = vec[i];
			vec[i] = vec[j];
			vec[j] = temp;
			i++;
			j--;
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << vec[i] << " ";
	}
	return 0;

}