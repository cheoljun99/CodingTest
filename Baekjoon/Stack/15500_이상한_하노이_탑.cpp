#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int K;
	stack<int> st1;
	stack<int> st2;

	vector<pair<int, int>>vec;

	cin >> K;

	for (int i = 0; i < K; i++) {
		int a;
		cin >> a;
		st1.push(a);
	}
	int check = K;

	bool traffic = 0;
	while (!st1.empty() || !st2.empty()) {
		if (traffic == 0) {
			while (!st1.empty()) {
				if (st1.top() == check) {
					vec.push_back({1, 3 });
					st1.pop();
					check--;
				}
				else {
					vec.push_back({ 1,2 });
					st2.push(st1.top());
					st1.pop();
				}
			}
			traffic = 1;
		}
		else {
			while (!st2.empty()) {
				if (st2.top() == check) {
					vec.push_back({ 2,3 });
					st2.pop();
					check--;
				}
				else {
					vec.push_back({ 2,1 });
					st1.push(st2.top());
					st2.pop();
				}
			}
			traffic = 0;
		}
	}
	cout << vec.size() << '\n';

	for (auto i : vec) {
		cout << i.first << ' ' << i.second << '\n';
	}
}