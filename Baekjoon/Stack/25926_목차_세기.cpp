#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	stack<int>st;
	stack<int>result;
	vector<int>vec;

	for (int i = 0; i < N; i++) {
		int l;
		cin >> l;
		if (vec.empty()) {
			vec.push_back(l);
		}
		else {
			if (l-vec.back()>=2) {
				cout << -1;
				return 0;
			}
			else {
				vec.push_back(l);
			}
		}
	}

	if (vec[0] != 1) {
		cout << -1;
		return 0;
	}

	for (int i = N - 1; i >= 0; i--) {
		int count = 0;
		if (st.empty()) {
			if (vec[i] != 1)
				st.push(vec[i]);
			result.push(count);
		}
		else {
			if (vec[i] >= st.top()) {
				st.push(vec[i]);
				result.push(count);
			}
			else if (vec[i] < st.top()) {
				while (!st.empty() && vec[i] < st.top()) {
					count++;
					st.pop();
				}
				if (vec[i] != 1) {
					st.push(vec[i]);
				}
				result.push(count);
			}
		}
	}
	while (!result.empty()) {
		cout << result.top() << '\n';
		result.pop();
	}
}