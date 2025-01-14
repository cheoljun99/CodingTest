#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int>que;
	for (int i = 1; i <= N; i++) {
		que.push(i);
	}
	while (!que.empty()) {
		cout << que.front()<<' ';
		que.pop();

		if (!que.empty()) {
			que.push(que.front());
			que.pop();
		}
		
	}

}