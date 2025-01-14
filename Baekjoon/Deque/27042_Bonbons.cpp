#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	deque<int>deq;

	for (int i = 1; i <= N; i++) {
		deq.push_back(i);
	}

	int count = 0;

	while (deq.size()!=1) {
		count++;
		if (count % 2 == 0) {
			deq.pop_front();
		}
		else {
			deq.push_back(deq.front());
			deq.pop_front();
		}
	}
	cout << deq.front();
	
}