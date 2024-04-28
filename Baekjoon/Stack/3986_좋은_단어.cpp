#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int ans = 0;

	while (N--) {
		stack<char>st;
		string str;
		cin >> str;
		for (int i = 0; i < str.size(); i++) {
			if (st.empty()) st.push(str[i]);
			else {
				if (st.top() == str[i]) st.pop();
				else st.push(str[i]);
			}
		}
		if (st.empty()) ans++;

	}
	cout << ans;
}