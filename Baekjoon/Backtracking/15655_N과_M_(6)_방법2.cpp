#include<bits/stdc++.h>

using namespace std;

int N, M;
int arr_main[8];// 주 수열
int arr_sub[8]; // 보조 수열

void backtracking(int cur, int depth) {

	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << arr_main[arr_sub[i]] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = cur + 1; i <= N; i++) {
		arr_sub[depth] = i - 1;
		backtracking(i, depth + 1);

	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++)cin >> arr_main[i];
	sort(arr_main, arr_main + N);

	backtracking(0, 0);
}
