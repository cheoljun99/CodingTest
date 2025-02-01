
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long N, K, T;
	cin >> N >> K >> T;

	stack<long long>st;
	vector<long long>vec(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end(), less<long long>());

	long long res = T;
	long long idx = 0;

	for (int i = 0; i < K; i++) {

		while (idx < N && res>vec[idx]) {
			st.push(vec[idx]);
			idx++;
		}
		if (st.empty()) {
			break;
		}
		else {
			res += st.top();
			st.pop();
		}
	}
	cout << res;
}