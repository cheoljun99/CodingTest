#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;

	cin >> N;
	stack<int> st;

	int cmd;
	while (N--) {
		cin >> cmd;
		if (cmd == 1) {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (cmd == 2) {
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (cmd == 3) {
			cout << st.size() << '\n';
		}
		else if (cmd == 4) {
			if (st.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (cmd == 5) {
			if (st.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << st.top() << '\n';
			}
		}
	}
	
}