#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;

	cin >> str;

	stack<int>st;

	for (int i = 0; i < str.size(); i++) {

		if (str[i] >= '0' && str[i] <= '9') {
			st.push(str[i] - '0');

		}
		else {
			int temp = st.top();
			st.pop();
			if (str[i] == '+') {
				int num = st.top();
				st.pop();
				st.push(num + temp);
			}
			else if (str[i] == '-') {
				int num = st.top();
				st.pop();
				st.push(num - temp);
			}
			else if (str[i] == '*') {
				int num = st.top();
				st.pop();
				st.push(num * temp);
			}
			else if (str[i] == '/') {
				int num = st.top();
				st.pop();
				st.push(num /temp);
			}

		}
		
	}
	cout << st.top();

}