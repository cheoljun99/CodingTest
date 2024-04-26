#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;

	cin >> T;

	while (T--) {
		bool reverse = false;
		bool error = false;
		deque<int> dq;
		string cmd;
		cin >> cmd;
		int size;
		cin >> size;
		string seq;
		cin >> seq;

		string num="";
		for (int i = 1; i < seq.size()-1; i++) {
			if (seq[i] == ',') {
				dq.push_back(stoi(num));
				num = "";
				continue;
			}
			num += seq[i];
		}
		if (num != "") {
			dq.push_back(stoi(num));
		}
		
		for (int i = 0; i < cmd.size(); i++) {
			if (cmd[i] == 'R') {
				if (reverse)reverse = false;
				else reverse = true;
			}
			else if (cmd[i] == 'D') {
				if (dq.empty()) {
					error = true; 
					continue;
				}
				if (reverse) dq.pop_back();
				else dq.pop_front();
			}
		}

		if (error == true) {
			cout << "error" << "\n";
			continue;
		}

		cout << '[';
		if (reverse) {
			while (!dq.empty()) {
				cout << dq.back();
				dq.pop_back();
				if (!dq.empty())cout << ',';
				
			}
		}
		else {
			while (!dq.empty()) {
				cout << dq.front();
				dq.pop_front();
				if (!dq.empty())cout << ',';
			}
		}
		cout <<']'<< '\n';
		
	}
}