#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	stack<pair<int,int>> st;

	cin >> N;
	
	int res = 0;
	while (N--) {
		int num;
		cin >> num;

		if (num == 1) {
			int A, T;
			cin >> A >> T;
			st.push({ A,T });

		}
		if (!st.empty()) {
			auto temp = st.top();
			temp.second--;
			st.pop();
			st.push(temp);
			if (st.top().second == 0) {
				res += st.top().first;
				st.pop();
			}
		}
	}
	cout << res;
}