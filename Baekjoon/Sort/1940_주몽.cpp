#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int M;
	cin >> N>>M;

	vector<int>vec(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end(), less<int>());

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (vec[i] + vec[j] == M)
				cnt++;
		}
	}
	cout << cnt;

}