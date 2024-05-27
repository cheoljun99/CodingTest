#include <bits/stdc++.h>

using namespace std;
bool cmp(vector<int> a, vector<int> b) {
	if (a[1] == b[1]) {
		if (a[2] == b[2]) {
			return a[3] > b[3];
		}
		return a[2] > b[2];
	}
	else {
		return a[1] > b[1];
	}
}
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int K;
	cin >> K;

	vector<vector<int>> vec(N, vector<int>(4,0));
	for (int i = 0; i < N; i++) {
		cin >> vec[i][0];
		cin >> vec[i][1];
		cin >> vec[i][2];
		cin >> vec[i][3];
	}

	sort(vec.begin(), vec.end(), cmp);

	int cnt = 0;
	int jmp = 0;
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			cnt++;
		}
		else
		{
			if (vec[i - 1][1] != vec[i][1] || vec[i - 1][2] != vec[i][2] || vec[i - 1][3] != vec[i][3]) {
				cnt=cnt+1+jmp;
				jmp = 0;
			}
			else {
				jmp++;
			}

		}
		if (vec[i][0] == K) {
			cout << cnt;
			return 0;
		}

	}

}