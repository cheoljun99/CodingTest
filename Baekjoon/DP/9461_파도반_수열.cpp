#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long DP[101] = { 0, };

	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	DP[5] = 2;


	for (int i = 6; i < 101; i++) {
		DP[i] = DP[i - 5] + DP[i - 1];
	}

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		cout << DP[N] << '\n';
	}

}