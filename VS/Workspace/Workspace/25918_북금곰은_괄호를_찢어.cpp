#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	string str;
	cin >> str;
	int cnt = 0;
	stack<char>st;

	for (int i = 0; i < N; i++) {
		if (st.empty())
			st.push(str[i]);
		else {
			if (st.top() != str[i]) {
				st.pop();
			}
			else {
				st.push(str[i]);
			}
		}
		if (cnt < st.size())
			cnt = st.size();
	}
	if (st.empty())
		cout << cnt;
	else
		cout << -1;
}