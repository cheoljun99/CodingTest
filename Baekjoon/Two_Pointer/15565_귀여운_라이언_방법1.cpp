#include <bits/stdc++.h>

using namespace std;

int arr[1000000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N,K;
	cin >> N >> K;

	for (int i = 0; i < N; i++) cin >> arr[i];

	int ans = 1000001;
	int ptr1 = 0;
	int ptr2 = 0;
	int cnt = (arr[0]==1);
	while (1) {
		if (cnt >= K) ans = min(ans, ptr2 - ptr1 + 1);

		if (ptr1 == N - 1 && ptr2 == N - 1) break; // 탈출 조건 둘다 끝을 가리킬때

		if (ptr1 == ptr2) {
	
			cnt += (arr[++ptr2] == 1); continue; // 포인터가 같은곳을 가리킬때 ptr2를 오른쪽 이동시킨다.
		} 

		if (ptr2 == N - 1) {
			cnt -= (arr[ptr1++] == 1); continue; //ptr2가 끝을 가리킬때 ptr1을 오른쪽으로 이동시킨다.
		}

		if (cnt < K) {
			cnt += (arr[++ptr2] == 1); continue; //라이언의 개수가 K보다 작을 경우 ptr2 포인터를 오른쪽 이동시킨다.
		}

		if (cnt >= K) {
			cnt -= (arr[ptr1++] == 1); continue; // 라이언의 개수가 K이상일 때 ptr1을 오른쪽으로 이동시킨다.
		}
	}

	cout << (ans== 1000001?-1:ans);
}
