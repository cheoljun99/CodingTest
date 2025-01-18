#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	queue<int> q;

	while (true) {
		int num;
		cin >> num;

		if (num == -1) {
			break;
		}
		else if (num == 0) {
			q.pop();
		}
		else {
			if (q.size() < N) {
				q.push(num);
			}
		}
	}

	if (q.empty())
		cout << "empty";
	else {
		while (!q.empty()) {
			cout << q.front() << ' ';
			q.pop();
		}
	}

}