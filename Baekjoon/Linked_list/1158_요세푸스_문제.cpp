#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	list<int> li;
	list<int> Jo_li;
	int N, K;
	cin >> N >> K;

	auto cursor1 = li.begin();
	auto cursor2 = Jo_li.begin();

	for (int i = 1; i <= N; i++) li.insert(cursor1, i);

	cursor1 = li.begin();

	int checker = 1;
	while (!li.empty()) {
		if (cursor1 == li.end()) {
			cursor1 = li.begin();
		}
		if (checker % K == 0) {
			Jo_li.insert(cursor2, *cursor1);
			checker = 1;
			cursor1 = li.erase(cursor1);
			continue;
		}
		checker++;
		cursor1++;
	}

	cout << "<";
	auto iter = Jo_li.begin();
	for (int i = 0; i < Jo_li.size(); i++) {
		if (i == Jo_li.size() - 1)cout << *iter;
		else cout << *iter << ", ";
		iter++;
	}
	cout << ">";
}