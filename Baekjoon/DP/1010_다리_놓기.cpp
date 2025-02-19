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
		// nCr =(n-1)C(r) + (n-1)C(r-1) ���� ������ ������ n���߿� r���� ���� ��
		// n���� �ϳ��� A��� �ϰԵǸ� A�� �̰� ������ n-1���� r-1���� �̴� ���,
		// A�� ���� �ʰ� n-1������ r���� �̴� ���
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