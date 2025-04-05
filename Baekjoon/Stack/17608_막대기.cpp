#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int>vec(N, 0);

	for (int i = N - 1; i > -1; i--) {
		cin >> vec[i];
	}

	stack<int>st;
	for (int i = 0; i < N; i++) {
		if (st.empty()) {
			st.push(vec[i]);
		}
		else {
			if (st.top() < vec[i]) {
				st.push(vec[i]);
			}
		}
	}
	cout << st.size();

}