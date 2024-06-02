#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int,vector<int>,greater<int>> p_q;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		if (num == 0) {
			if (p_q.empty()) cout << 0 << '\n';
			else {
				cout << p_q.top() << '\n';
				p_q.pop();
			}
		}
		else p_q.push(num);
	}

}