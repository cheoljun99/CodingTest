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
			//push�� ����ó�� ����
			int num;
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop") {
			//pop�� ����ó�� �ʿ�
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
			//font�� ����ó�� �ʿ�
			if (q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (cmd == "back") {
			//back�� ����ó�� �ʿ�
			if (q.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << q.back() << '\n';
			}
		}
	}
}