#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N;
	cin >> N;

	queue<pair<string, int>>q;
	for (int i = 0; i < N; i++) {
		string str;
		int num;

		cin >> str >> num;

		q.push({ str,num });
	}

	int cnt = 1;
	while (q.size() != 1) {
		auto front = q.front();
		q.pop();

		for (int i = cnt; i < front.second; i++) {
			auto temp = q.front();
			q.pop();
			q.push(temp);
		}
		q.pop();


	}
	cout << q.front().first;
}