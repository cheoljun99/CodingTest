#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K, M;

	cin >> N >> K >> M;

	deque<int>deq;
	for (int i = 1; i <= N; i++) {
		deq.push_back(i);
	}

	int cnt = 1;
	int rev = 0;
	int del = 0;

	while (!deq.empty()) {
		if (rev == 0) {

			if (cnt % K == 0) {
				cout << deq.front() << '\n';
				deq.pop_front();
				del++;
				if (del == M) {
					rev = 1;
					del = 0;
				}
			}
			else {
				deq.push_back(deq.front());
				deq.pop_front();
			}
			cnt++;
		}
		else{
			if (cnt % (K + 1) == 0){
				cout << deq.front() << '\n';
				deq.pop_front();
				del++;
				if (del == M) {
					rev = 0;
					del = 0;
				}
			}
			else {
				deq.push_front(deq.back());
				deq.pop_back();
			}
			cnt++;

		}
	}
}