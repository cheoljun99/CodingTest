#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	deque<int>deq;
	deq.push_back(N);

	for (int i = N - 1; i > 0; i--) {
		deq.push_front(i);
		for (int j = 0; j < i; j++) {
			deq.push_front(deq.back());
			deq.pop_back();
		}
	}

	while (!deq.empty()) {
		cout << deq.front() << ' ';
		deq.pop_front();
	}

}