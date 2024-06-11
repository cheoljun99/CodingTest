#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> price(N);
	vector<int> lis(N);
	vector<int> lis_idx(N);

	for (int i = 0; i < N; i++) cin >> price[i];

	int len=0;
	for (int i = 0; i < N; i++) {
		auto pos = lower_bound(lis.begin(), lis.begin() + len, price[i]);
		*pos = price[i];
		lis_idx[i] = distance(lis.begin(), pos);
		if (pos == lis.begin() + len) len++;
	}
	cout << len << '\n';

	stack<int> st;

	for (int i = N - 1; i >=0; i--) {
		if (lis_idx[i] == len-1) {
			st.push(i);
			len--;
		}
	}

	while (!st.empty()) {
		cout << price[st.top()] << " ";
		st.pop();
	}
}