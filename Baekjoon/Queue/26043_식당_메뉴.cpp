#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	queue<pair<int, int>>q;
	vector<int>A, B, C;

	while (N--) {
		int S, a, b;

		cin >> S;
		if (S == 1) {
			cin >> a >> b;
			q.push({ a,b });
		}
		else {
			cin >> b;
			if (q.front().second == b) {
				A.push_back(q.front().first);
			}
			else {
				B.push_back(q.front().first);
			}
			q.pop();
		}
	}
	if (!q.empty()) {
		while (!q.empty()) {
			C.push_back(q.front().first);
			q.pop();
		}
	}

	sort(A.begin(), A.end(), less<int>());
	sort(B.begin(), B.end(), less<int>());
	sort(C.begin(), C.end(), less<int>());

	if (A.size() == 0) {
		cout << "None"<<'\n';
	}
	else {
		for (auto i : A) {
			cout << i << ' ';
		}
		cout << '\n';
	}
	if (B.size() == 0) {
		cout << "None" << '\n';
	}
	else {
		for (auto i : B) {
			cout << i << ' ';
		}
		cout << '\n';
	}

	if (C.size() == 0) {
		cout << "None" << '\n';
	}
	else {
		for (auto i : C) {
			cout << i << ' ';
		}
		cout << '\n';
	}




}