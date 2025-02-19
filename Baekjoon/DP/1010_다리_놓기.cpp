#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		vector<vector<long long>>DP(M +1, vector<long long>(M +1, 0));
		// nCr =(n-1)C(r) + (n-1)C(r-1) 포함 배제의 원리로 n개중에 r개를 뽑을 때
		// n개중 하나를 A라고 하게되면 A를 뽑고 나머지 n-1에서 r-1개를 뽑는 경우,
		// A를 뽑지 않고 n-1개에서 r개를 뽑는 경우
		for (long long i = 0; i <= M; i++) {
			DP[i][1] = i;
			DP[i][i] = 1;
			DP[i][0] = 1;
		}

		for (int i = 1; i <= M; i++) {
			for (int j = 1; j <= i; j++) {
				DP[i][j] = DP[i - 1][j] + DP[i - 1][j - 1];
			}
		}
		cout << DP[M][N]<<'\n';

	}

}