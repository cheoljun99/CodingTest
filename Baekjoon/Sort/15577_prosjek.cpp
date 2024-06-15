#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	vector<float>vec(N);
	for (int i = 0; i < N; i++) cin >> vec[i];
	sort(vec.begin(), vec.end());
	float n;
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			n = vec[i];
		}
		else {
			n = (n + vec[i]) / 2;
		}
	}
	printf("%f", n);
}