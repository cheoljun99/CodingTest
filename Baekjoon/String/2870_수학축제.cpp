#include<bits/stdc++.h>

using namespace std;

bool cmp(string& a, string& b) {

	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] < b[i])
				return true;
			else if (a[i] == b[i])
				continue;
			else
				return false;
		}
	}
	
	return a.size() < b.size();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;

	vector<string>vec;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;

		string temp="";
		for (int j = 0; j < input.size(); j++) {
			if (input[j] >= '0' && input[j] <= '9') {
				temp += input[j];
			}
			else {
				if (temp != "") {
					while (temp[0] == '0' && temp.size() >= 2) {
						temp.erase(0, 1);
					}
					vec.push_back(temp);
					temp = "";
				}
			}
		}
		if (temp != "") {
			while (temp[0] == '0' && temp.size() >= 2) {
				temp.erase(0, 1);
			}
			vec.push_back(temp);
			temp = "";
		}

	}

	sort(vec.begin(), vec.end(),cmp);

	for (auto i : vec) {
		cout << i << '\n';
	}
}