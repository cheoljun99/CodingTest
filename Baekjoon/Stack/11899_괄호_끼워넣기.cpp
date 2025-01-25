#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin >> str;

	stack<int>st;

	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			st.push('(');
		}
		else {
			if (st.empty())
				cnt++;
			else {
				st.pop();
			}
		}
	}

	while (!st.empty()) {
		cnt++;
		st.pop();
	}
	cout << cnt;
}