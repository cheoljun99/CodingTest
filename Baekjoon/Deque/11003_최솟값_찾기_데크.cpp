#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, L;

	cin >> N >> L;

	deque<pair<int,int>> deq;
	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;
		while (!deq.empty() && deq.back().second >= num) {
			deq.pop_back();
		}
		deq.push_back({ i,num });

		while (deq.front().first < i - L + 1) {
			deq.pop_front();
		}
		cout << deq.front().second << " ";
	}
}