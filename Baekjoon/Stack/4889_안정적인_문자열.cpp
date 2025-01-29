#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt = 1;
	while (1) {
		string str;
		cin >> str;

		stack<char>st;

		int res = 0;

		if (str[0] == '-') {
			return 0;
		}
		else {
			for (int i = 0; i < str.size(); i++) {
				if (st.empty()) {
					st.push(str[i]);
				}
				else {
					if (str[i] == '}') {
						if (st.top() == '{')
							st.pop();
						else
							st.push(str[i]);
					}
					else
						st.push(str[i]);
				}
			}
		}

		while (!st.empty()) {
			char tmp = st.top();
			st.pop();
			if (tmp == '{') {
				if (st.top() == '{')
					res++;
				else
					res += 2;
				st.pop();
			}
			else {
				if (st.top() == '}')
					res++;
				st.pop();
			}
		}

		cout << cnt<<". " << res << '\n';
		cnt++;
	}
}