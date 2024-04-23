#include<bits/stdc++.h>


using namespace std;


int main() {

	list<int> li;
	list<int> Y_li;
	int N,K;
	cin >> N>>K;

	auto cursor = li.begin();
	auto cursor2 = Y_li.begin();

	for (int i = 1; i <= N; i++) li.insert(cursor, i);

	cursor = li.begin();

	int checker = 1;
	while (!li.empty()) {
		if (checker%K==0) {
			Y_li.insert(cursor2, *cursor);
			checker=1;
			cursor = li.erase(cursor);
			if (cursor == li.end()) {
				cursor = li.begin();
			}
			continue;
		}
		checker++;
		cursor++;
		if (cursor == li.end()) {
			cursor = li.begin();
		}
	}
	cout <<"<";
	auto iter = Y_li.begin();
	for (int i = 0; i < Y_li.size(); i++) {
		if (i == Y_li.size() - 1)cout << *iter;
		else cout << *iter<<", ";
		iter++;
	}
	cout << ">";
}