#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int>six(M, 0);
	vector<int>one(M, 0);

	for (int i = 0; i < M; i++) {
		cin >> six[i] >> one[i];
	}

	sort(six.begin(), six.end(), less<int>());
	sort(one.begin(), one.end(), less<int>());

	int cnt = 0;
	while (N > 0) {
		if (N <= 6) {
			if (six[0] < one[0] * N) {
				cnt+= six[0];
				N -= 6;
			}
			else {
				cnt += (one[0] * N);
				N -= N;
			}
		}
		else {
			if (six[0] < one[0] * 6) {
				cnt += six[0];
				N -= 6;
			}
			else {
				cnt += (one[0] * 6);
				N -= 6;
			}
		}
	}
	cout << cnt;

}