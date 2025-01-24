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
	stack<double>st;
	vector<int>vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			st.push(vec[str[i]-'A']);
		}
		else {
			double tmp = st.top();
			st.pop();
			if (str[i] == '+') {
				double num = st.top();
				st.pop();
				st.push(num+tmp);
			}
			else if (str[i] == '-') {
				double num = st.top();
				st.pop();
				st.push(num - tmp);
			}
			else if (str[i] == '*') {
				double num = st.top();
				st.pop();
				st.push(num*tmp);
			}
			else if (str[i] == '/') {
				double num = st.top();
				st.pop();
				st.push(num/tmp);
			}
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << st.top();
}