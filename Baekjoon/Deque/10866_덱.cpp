#include<bits/stdc++.h>

using namespace std;

int main() {


	int play;
	cin >> play;

	deque<int> dq;

	while (play--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push_front") {
			//push_front�� ����ó�� ����
			int num;
			cin >> num;
			dq.push_front(num);
		}
		if (cmd == "push_back") {
			//push_back�� ����ó�� ����
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (cmd == "pop_front") {
			//pop_front�� ����ó�� �ʿ�
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			//pop_back�� ����ó�� �ʿ�
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << dq.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << dq.empty() << '\n';
		}
		else if (cmd == "front") {
			//font�� ����ó�� �ʿ�
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << '\n';
			}
		}
		else if (cmd == "back") {
			//back�� ����ó�� �ʿ�
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << '\n';
			}
		}
	}
}