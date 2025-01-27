#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();
	while (N--) {
		string str;
		getline(cin, str);
		if (str.size() == 0) {
			cout << '1' << '\n';
			continue;
		}
		else {
			stack<char>st;
			int cnt = 0;
			int res = 1;
			for (int i = 0; i < str.size(); i++) {
				if (str[i] == '[') {
					st.push(str[i]);
					if (st.size() > cnt) {
						cnt = st.size();
					}
				}
				else {
					if (!st.empty()) {
						st.pop();
					}
				}
			}
			for (int i = 0; i < cnt; i++) {
				res *= 2;
			}
			cout << res<<'\n';
		}
	}
}