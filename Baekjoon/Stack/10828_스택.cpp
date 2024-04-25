#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//스택하나 선언
	stack<int> st;

	int play = 0;
	cin >> play;
	while (play--) {
		string cmd;
		int num;
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (cmd == "pop") {
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout<< st.top() <<"\n";
				st.pop();
			}
		}
		else if (cmd == "size") {
			cout << st.size() << "\n";
		}
		else if (cmd == "empty") {
			cout << st.empty() << "\n";
		}
		else{ //top
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << st.top() << "\n";
			}
		}
	}
}