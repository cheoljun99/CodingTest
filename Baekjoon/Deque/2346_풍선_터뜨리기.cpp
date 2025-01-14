#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N;
	cin >> N;
	deque<pair<int,int>>deq;

	for(int i=1;i<=N;i++) {
		int num;
		cin >> num;
		deq.push_back({ num,i });
	}
	int nextIdx = 0;
	while (1) {
		nextIdx = deq.front().first;
		cout << deq.front().second<<' ';
		deq.pop_front();
		if (deq.empty())
			break;
		if (nextIdx > 0) {

			for (int i = 0; i < nextIdx - 1; i++) {
				deq.push_back(deq.front());
				deq.pop_front();
			}
		}
		else {

			for (int i = nextIdx; i < 0; i++) {
				deq.push_front(deq.back());
				deq.pop_back();
			}

		}


	}
}