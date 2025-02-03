#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	vector<int>dpVector(12, 0);
	dpVector[1] = 1;
	dpVector[2] = 2;
	dpVector[3] = 4;

	for (int i = 4; i < 12; i++) {
		dpVector[i] = dpVector[i - 1] + dpVector[i - 2] + dpVector[i - 3];
	}

	while (T--) {
		int n;
		cin >> n;

		cout << dpVector[n]<<'\n';
	}

}