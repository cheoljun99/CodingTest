#include<bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	stack<char>st;

	int total = 0; // 누적해서 더해질 값 
	int num = 1;// 괄호를 만날 때 마다 곱해질 값

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			num *= 2;
			st.push(str[i]);
		}
		else if (str[i] == '[') {
			num *= 3;
			st.push(str[i]);
		}
		else if (str[i] == ')') {
			if (st.empty() || st.top() != '(') {
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '(')total += num;
			st.pop();
			num /= 2;
		}
		else if (str[i] == ']') {
			if (st.empty() || st.top() != '[') {
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '[')total += num;
			st.pop();
			num /= 3;
		}
	}
	if (st.empty())cout << total;
	else cout << 0;
}