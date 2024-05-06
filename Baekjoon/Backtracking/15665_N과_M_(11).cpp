#include <bits/stdc++.h>

using namespace std;
int N, M;

int arr_main[8];// 주 수열
int arr_ans[8]; // 정답 수열

void backtracking(int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << arr_ans[i] << " ";
		}
		cout << '\n';
		return;
	}
	int tmp = 0;  // 중복 수열인지 확인 하기 위해 필요한 임시 변수
	for (int i = 0; i < N; i++) {
		if (tmp != arr_main[i]) {
			arr_ans[depth] = arr_main[i];
			tmp = arr_ans[depth];
			backtracking(depth + 1);
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++)cin >> arr_main[i];
	sort(arr_main, arr_main + N);

	backtracking(0);

}