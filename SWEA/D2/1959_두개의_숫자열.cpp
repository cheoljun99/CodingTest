#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	
	
	for (int i = 1; i <= T; i++) {
		int N, M;
		cin >> N >> M;

		int check = 0;//������ 1 N��ũ�� 1 M�� ũ�� 2
		if (N >= M) check = 1;
		else if (N < M)check = 2;

		vector<int>A(N);
		vector<int>B(M);
		for (int i = 0; i < N; i++) cin >> A[i];
		for (int i = 0; i < M; i++) cin >> B[i];

		int ans = 0;
		if (check == 1) {
			int ptr1 = 0;
			int ptr2 = M - 1;
			for (int i = 0; i <= A.size() - M; i++) {
				int sum = 0;
				int k = 0;
				for (int j = ptr1; j <= ptr2; j++) {
					sum += A[j]*B[k];
					k++;
				}
				ans = max(ans, sum);
				ptr1++;
				ptr2++;
			}
		}
		else if (check == 2) {
			int ptr1 = 0;
			int ptr2 = N - 1;
			for (int i = 0; i <= B.size() - N; i++) {
				int sum = 0;
				int k = 0;
				for (int j = ptr1; j <= ptr2; j++) {
					sum += B[j]*A[k];
					k++;
				}
				ans = max(ans, sum);
				ptr1++;
				ptr2++;
			}
		}
		cout << "#" << i << " "<< ans<<'\n';

	}

	
}