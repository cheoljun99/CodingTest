#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	deque<pair<int,char>> deq;

	cin >> N;

	int cnt = 1;
	while (N--) {
		int num;
		cin >> num;
		if (num == 1) {
			char ch;
			cin >> ch;
			deq.push_back({cnt,ch});
			cnt++;
		}
		else if (num == 2) {
			char ch;
			cin >> ch;
			deq.push_front({cnt,ch});
			cnt++;
		}
		else {
			if (deq.empty())
				continue;

			if (deq.front().first>deq.back().first) {
				deq.pop_front();
			}
			else {
				deq.pop_back();
			}

		}
	}

	if (deq.empty())
		cout << 0;
	else {
		for (int i = 0; i < deq.size(); i++) {
			cout << deq[i].second;
		}
	}

}