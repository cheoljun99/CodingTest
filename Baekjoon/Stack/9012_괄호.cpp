#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;



	while (T--) {
		stack<char>st;
		string str;
		cin >> str;
		bool no_check = false;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') st.push(str[i]);
			else {//str[i] == ')'
				if (st.empty()) {
					no_check = true;
					continue;
				}
				st.pop();
			}
		}
		if (no_check) { cout << "NO" << '\n'; continue; }
		if (!st.empty()) { cout << "NO" << '\n'; continue; }
		cout << "YES" << '\n';
	}
}