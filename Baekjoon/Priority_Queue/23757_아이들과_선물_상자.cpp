#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	priority_queue<int> gift;
	vector<int> child(M);

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		gift.push(num);
	}
	for (int i = 0; i < M; i++) {
		cin >> child[i];
	}

	for (int i = 0; i < M; i++) {
		if (child[i] <= gift.top()) {
			int gift_top = gift.top();
			gift.pop();
			gift.push(gift_top - child[i]);
		}
		else {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}