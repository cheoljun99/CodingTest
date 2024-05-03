#include<bits/stdc++.h>

using namespace std;

int N, S;
int arr[20];
int cnt;

void recursion(int cur, int sum) {

	if (cur == N) {
		if (sum == S)
			cnt++;
		return;
	}
	recursion(cur + 1, sum);
	recursion(cur + 1, sum + arr[cur]);

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	recursion(0, 0);

	if (S == 0)cnt -= 1;// 부분수열중 크기가 양수인 수열만 고려하므로 S가 0인경우 공집합이 추가될 것이고 이를 제외하여야함.
	cout << cnt;
}