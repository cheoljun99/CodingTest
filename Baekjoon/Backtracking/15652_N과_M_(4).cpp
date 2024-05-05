#include <bits/stdc++.h>

using namespace std;
int N, M;

int arr[8];
void backtracking(int idx, int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = idx; i <= N; i++) {
		arr[depth] = i;
		backtracking(i, depth + 1);
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	backtracking(1, 0);

}