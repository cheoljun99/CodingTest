#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	priority_queue<int>p_q;

	for (int i = 0; i < n; i++) {

		int num;
		cin >> num;

		if (num != 0) {
			for (int i = 0; i < num; i++) {
				int input;
				cin >> input;
				p_q.push(input);
			}
		}
		
		else {
			if (p_q.empty()) cout << -1 << '\n';
			else {
				cout << p_q.top() << '\n';
				p_q.pop();
			}
		}
	}
}