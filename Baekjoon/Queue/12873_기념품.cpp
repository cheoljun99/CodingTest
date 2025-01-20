#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int>q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	long long cnt = 1;
	while (q.size() != 1) {
		long long tmp = cnt * cnt * cnt;
		tmp = tmp % q.size();

		if (tmp == 0) {
			tmp = q.size();
		}

		for (int i = 1; i <tmp; i++) {
			int swp = q.front();
			q.pop();
			q.push(swp);
		}
		q.pop();
		cnt++;
	}
	cout << q.front();
}