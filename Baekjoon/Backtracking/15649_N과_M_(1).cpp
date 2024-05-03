#include<bits/stdc++.h>

using namespace std;

int N, M;
int arr[8];
bool used[8];

void backtracking(int k) {
	
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i]<<' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++) {
		if (!used[i]) {
			arr[k] = i;
			used[i] = 1;
			backtracking(k + 1);
			used[i] = 0;
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	backtracking(0);
}