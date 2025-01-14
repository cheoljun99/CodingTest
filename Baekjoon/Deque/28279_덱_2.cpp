#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N;
	cin >> N;
	deque<int>deq;


	while (N--) {
		int cmd;
		cin >> cmd;
		
		if (cmd == 1) {
			int num;
			cin >> num;
			deq.push_front(num);
		}
		else if (cmd == 2) {
			int num;
			cin >> num;
			deq.push_back(num);
		}
		else if (cmd == 3) {
			if (deq.empty())
				cout << -1 << '\n';
			else {
				cout << deq.front() << '\n';
				deq.pop_front();
			}
		}
		else if (cmd == 4) {
			if (deq.empty())
				cout << -1 << '\n';
			else {
				cout << deq.back() << '\n';
				deq.pop_back();
			}
		}
		else if (cmd == 5) {
			cout << deq.size() << '\n';
		}
		else if (cmd == 6) {
			if (deq.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (cmd == 7) {
			if (deq.empty())
				cout << -1 << '\n';
			else {
				cout << deq.front() << '\n';
			}
		}
		else if (cmd == 8) {
			if (deq.empty())
				cout << -1 << '\n';
			else {
				cout << deq.back() << '\n';
			}
		}	
	}
}