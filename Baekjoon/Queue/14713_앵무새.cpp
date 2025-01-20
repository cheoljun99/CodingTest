#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;

	cin >> N;
	cin.ignore();
	
	queue<string> *	q = new queue<string>[N];

	for (int i=0;i<N;i++) {
		string str;
		getline(cin, str);
		string temp="";
		for (int j= 0; str[j] != '\0'; j++) {

			if (str[j] == ' ') {
				q[i].push(temp);
				temp = "";
			}
			else {
				temp += str[j];
			}
		}
		q[i].push(temp);
	}
	string check;
	getline(cin, check);
	queue<string>q_c;
	string temp = "";
	for (int j = 0; check[j] != '\0'; j++) {

		if (check[j] == ' ') {
			q_c.push(temp);
			temp = "";
		}
		else {
			temp += check[j];
		}
	}
	q_c.push(temp);
	int imp = 0;
	while (!q_c.empty()) {

		for (int i = 0;i<N;i++) {
			if (!q[i].empty() &&q_c.front() == q[i].front()) {
				q_c.pop();
				q[i].pop();
				imp = 1;
				break;
			}

		}
		if (imp == 0) {
			cout << "Impossible";
			return 0;
		}
		else {
			imp = 0;
			continue;
		}
	}
	for (int i = 0; i < N; i++) {
		if (!q[i].empty()) {
			cout << "Impossible";
			return 0;
		}
	}
	cout << "Possible";

}