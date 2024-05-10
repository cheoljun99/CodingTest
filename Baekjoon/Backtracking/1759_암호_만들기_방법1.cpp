#include <bits/stdc++.h>

using namespace std;

int L, C;

char ans[15];
char chr[15];
//con_num == 자음 개수
//vow_num == 모음 개수

void backtracking(int idx, int con_num, int vow_num,int cnt) {
	if (idx == C) {
		if (con_num >= 2 && vow_num >= 1 && cnt == L ) {
			for (int i = 0; i < L; i++)cout << ans[i];
			cout << '\n';
		}
		return;
	}
	ans[cnt] = chr[idx];
	if (chr[idx] == 'a' || chr[idx] == 'e' || chr[idx] == 'i' || chr[idx] == 'o' || chr[idx] == 'u') {
		backtracking(idx + 1, con_num, vow_num + 1, cnt + 1);
		backtracking(idx + 1, con_num, vow_num, cnt);
	}
	else {
		backtracking(idx + 1, con_num+ 1, vow_num , cnt + 1);
		backtracking(idx + 1, con_num, vow_num, cnt);
	}
	return;
}

int main() {
	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		cin >> chr[i];
	}
	sort(chr, chr + C);
	backtracking(0, 0, 0, 0);

}