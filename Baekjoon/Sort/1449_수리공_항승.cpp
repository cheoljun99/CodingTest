#include <bits/stdc++.h>

using namespace std;

int main() {

	int N, L;
	cin >> N >> L;
	vector<int> vec(N);

	for (int i = 0; i < N; i++) cin >> vec[i];

	sort(vec.begin(), vec.end());

	int point = vec[0];
	int cnt = 0;

	for (int i = 0; i < N; i++) {

		int interval = vec[i] - point+1;

		if (interval > L) {
			cnt++;
			point = vec[i];
		}
		//그리디 적용

	}
	cout << cnt+1;
}
