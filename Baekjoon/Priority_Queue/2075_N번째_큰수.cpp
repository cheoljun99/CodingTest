#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int,vector<int>,greater<int>> p_q;
	for (int i = 0; i < N * N; i++) {
		int num;
		cin >> num;
		if (i < N) {
			p_q.push(num);
		}
		else {
			if (num > p_q.top()) {
				p_q.pop();
				p_q.push(num);
			}
		}
	}
	cout << p_q.top();

}