#include<bits/stdc++.h>

using namespace std;

int N;
int cnt;//답
bool used1[30]; // y에 대응
bool used2[30]; // x+y에 대응
bool used3[30]; // x-y+(N-1)에 대응

void backtracking(int k) {
	//k는 행
	if (k == N) {
		cnt++;
		return;
	}
	for (int i = 0; i <N; i++) {
		//i가 열
		if (!used1[i]&&!used2[k+i]&&!used3[k-i+(N-1)]) {
			used1[i] = 1;
			used2[k + i] = 1;
			used3[k - i + (N - 1)] = 1;
			backtracking(k + 1);
			used1[i] = 0;
			used2[k + i] = 0;
			used3[k - i + (N - 1)] = 0;
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	backtracking(0);
	cout << cnt;
}