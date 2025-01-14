#include<bits/stdc++.h>

using namespace std;

void printStack(stack<char>& st) {

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	getline(cin, S);

	stack<char>st;
	bool tag = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '<') {
			printStack(st);
			tag = 1;
			cout << S[i];
		}
		else if (tag == 1) {
			cout << S[i];
			if (S[i] == '>') {
				tag = 0;
			}
		}
		else {
			if (S[i] == ' ') {
				printStack(st);
				cout << S[i];
			}
			else {
				st.push(S[i]);
			}
		}
	}
	printStack(st);
}