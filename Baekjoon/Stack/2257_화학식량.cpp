#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	stack<int>st;
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			st.push(-1);
		}
		else if (str[i] == ')') {
			int num=0;
			while (st.top() != -1) {
				num += st.top();
				st.pop();
			}
			st.pop();
			st.push(num);
		}
		else if(str[i]>='2'&&str[i]<='9') {
			int tmp = st.top();
			tmp *= (str[i] - '0');
			st.pop();
			st.push(tmp);
		}
		else {
			if (str[i] == 'H') {
				st.push(1);
			}
			else if (str[i] == 'C') {
				st.push(12);
			}
			else if (str[i] == 'O') {
				st.push(16);
			}
		}
	}
	int res = 0;
	while (!st.empty()) {
		res+= st.top();
		st.pop();
	}
	cout << res;
}