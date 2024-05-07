#include <bits/stdc++.h>

using namespace std;
int N;
int arr[13];// 주 수열
int ans[6];// 정답 수열


void backtracking(int idx,int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++)
			cout << ans[i] << " ";
		cout << '\n';
		return;
	}
	for (int i = idx; i < N; i++) {
		if (N-i<6-depth) { //핵심
			/*
			i N N-i depth  6-depth
			0 7 7   0      6-depth 보다 큼
			1 7 6   0      6-depth 임
			2 7 5   0      6-depth 보다 작음
			*/
			break;
		}
		else {
			ans[depth] = arr[i];
			backtracking(i+1,depth + 1);
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1) {
		cin >> N;
		memset(arr, 0, sizeof(int) * 13);
		if (N == 0)
			return 0;
		else {
			for (int i = 0; i < N; i++)
				cin >> arr[i];
			backtracking(0, 0);
			cout << "\n";
		}
	}

}