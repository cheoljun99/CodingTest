#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	int M;
	cin >> M;
	while (M--) {
		int num;
		cin >> num;
		cout << binary_search(vec.begin(), vec.end(), num)<<'\n';
	}
}