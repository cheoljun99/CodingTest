#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;

		deque<char>deq;
		for (int i = 0; i < N; i++) {
			char ch;
			cin >> ch;
			if (deq.empty()) {
				deq.push_back(ch);
			}
			else if(ch<=deq.front()) {
				deq.push_front(ch);
			
			}
			else {
				deq.push_back(ch);
			}
		}

		for (int i = 0; i < deq.size(); i++) {
			cout << deq[i];
		}
		cout << "\n";
	}

}