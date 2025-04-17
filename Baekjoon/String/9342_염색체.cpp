#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		string temp;
		temp += str[0];

		for (int j = 1; j < str.size() - 1; j++) {

			if (j == 1) {
				temp += str[j];
			}
			else {
				if (str[j] != str[j - 1]) {
					temp += str[j];
				}
			}

		}

		temp += str[str.size() - 1];
		
		if (temp.size() > 5) {
			cout << "Good" << '\n';
			continue;
		}
		else if (temp.size() < 3) {
			cout << "Good" << '\n';
			continue;
		}
		else if (temp.size() == 3) {
			if (temp == "AFC") {
				cout << "Infected!" << '\n';
			}
			else {
				cout << "Good" << '\n';
			}
			continue;
		}
		else if (temp.size() == 5) {
			if (temp[0] == 'A' || temp[0] == 'B' || temp[0] == 'C' || temp[0] == 'D' || temp[0] == 'E' || temp[0] == 'F') {
				if (temp[4] == 'A' || temp[4] == 'B' || temp[4] == 'C' || temp[4] == 'D' || temp[4] == 'E' || temp[4] == 'F') {

					if (temp[1] == 'A' && temp[2] == 'F' && temp[3] == 'C') {
						cout << "Infected!" << '\n';
					}
					else {
						cout << "Good" << '\n';
					}
					continue;
				}
				else {
					cout << "Good" << '\n';
					continue;
				}
			}
			else {
				cout << "Good" << '\n';
				continue;
			}
		}
		else if (temp.size() == 4) {
			if (temp[0] == 'A' || temp[0] == 'B' || temp[0] == 'C' || temp[0] == 'D' || temp[0] == 'E' || temp[0] == 'F') {
				if (temp[1] == 'A' && temp[2] == 'F' && temp[3] == 'C') {
					cout << "Infected!" << '\n';
					continue;
				}
			}
			if (temp[3] == 'A' || temp[3] == 'B' || temp[3] == 'C' || temp[3] == 'D' || temp[3] == 'E' || temp[3] == 'F') {
				if (temp[0] == 'A' && temp[1] == 'F' && temp[2] == 'C') {
					cout << "Infected!" << '\n';
					continue;
				}
			}
			cout << "Good" << '\n';
			continue;

		}
	}

}