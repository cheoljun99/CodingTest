#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int dasom = 0;
	priority_queue<int>p_q;
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			cin >> dasom;
		}
		else {
			int num;
			cin >> num;
			p_q.push(num);
		}
	}

	int cnt = 0;
	if(p_q.empty()) cout<< cnt;
	else {
		while (p_q.top() >= dasom) {
			int top = p_q.top();
			p_q.pop();
			dasom += 1;
			top -= 1;
			p_q.push(top);
			cnt++;
		}
		cout << cnt;
	}

}