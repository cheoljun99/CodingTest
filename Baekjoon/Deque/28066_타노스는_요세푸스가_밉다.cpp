#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;

	cin >> N >> K;

	deque<int>deq;

	for (int i = 1; i <= N;i++) {
		deq.push_back(i);
	}

	
	while (true) {
		int temp = 0;
		for (int i = 1; i <= K; i++) {
			if (i == 1) {
				temp=deq.front();
				deq.pop_front();
			}
			else {
				if (deq.empty())
					break;
				else
					deq.pop_front();
			}
		}
		deq.push_front(temp);
		if (deq.size() == 1) {
			break;
		}
		if (deq.size() >= 2) {
			int next_first = deq.front();
			deq.pop_front();
			deq.push_back(next_first);
		}
	}

	cout << deq.front();
}