#include <bits/stdc++.h>

using namespace std;
int N, M;

int arr_main[8];// �� ����
int arr_ans[8]; // ���� ����

void backtracking(int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << arr_ans[i] << " ";
		}
		cout << '\n';
		return;
	}
	int tmp = 0;  // �ߺ� �������� Ȯ�� �ϱ� ���� �ʿ��� �ӽ� ����
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