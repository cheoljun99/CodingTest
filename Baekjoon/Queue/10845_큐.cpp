#include<bits/stdc++.h>

using namespace std;

int main() {


	int play;
	cin >> play;

	queue<int> q;

	while (play--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			//push는 예외처리 없음
			int num;
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop") {
			//pop은 예외처리 필요
			if (q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << q.empty() << '\n';
		}
		else if (cmd == "front") {
			//font은 예외처리 필요
			if (q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (cmd == "back") {
			//back은 예외처리 필요
			if (q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << q.back() << '\n';
			}
		}
	}
}