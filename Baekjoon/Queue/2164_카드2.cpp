#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	//{�ѱ�, �ѱ�} �ѱ۱������� �׽�Ʈ

	queue<int> q;

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	while (1) {
		int cur = q.front();
		q.pop();
		if (q.empty()) {
			cout << cur;
			return 0;
		}
		else {
			int back = q.front();
			q.push(back);
			q.pop();
		}
	}

}