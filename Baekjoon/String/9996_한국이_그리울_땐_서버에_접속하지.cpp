#include<bits/stdc++.h>

using namespace std;

vector<string>splitString(string& str, char delimeter) {

	vector<string>result;
	stringstream ss(str);
	string token;

	while (getline(ss, token, delimeter)) {
		result.push_back(token);
	}
	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	string patten;
	cin >> patten;

	vector<string> pattenVec = splitString(patten, '*');
	vector<string>input;
	vector<string>result;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		input.push_back(str);
	}

	for (int i = 0; i < N; i++) {

		if (input[i].size() < patten.size() - 1) {
			result.push_back("NE");
			continue;
		}

		bool NECheck = 0;
		for (int j = 0; j < pattenVec[0].size(); j++) {
			if (input[i][j] != pattenVec[0][j]) {
				NECheck = 1;
				continue;
			}
		}
		if (NECheck == 1) {
			result.push_back("NE");
			continue;
		}
		reverse(input[i].begin(), input[i].end());
		reverse(pattenVec[1].begin(), pattenVec[1].end());
		for (int j = 0; j < pattenVec[1].size(); j++) {
			if (input[i][j] != pattenVec[1][j]) {
				NECheck = 1;
				continue;
			}
		}
		reverse(pattenVec[1].begin(), pattenVec[1].end());  
		if (NECheck == 1) {
			result.push_back("NE");
			continue;
		}
		result.push_back("DA");
	}
	for (auto i : result) {
		cout << i << '\n';
	}


}