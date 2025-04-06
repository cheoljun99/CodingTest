#include<bits/stdc++.h>

using namespace std;

vector<string> splitString(string& str, char *delimeter) {

	vector<string> result;
	string token="";

	stringstream ss(str);
	while (getline(ss, token, *delimeter)) {
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
	cin.ignore();
	vector<string> inputString(N,"");

	vector<vector<string>> result;

	for (int i = 0; i < N; i++) {
		getline(cin, inputString[i]);
	}

	for (int i = 0; i < N; i++) {
		char test = ' ';
		vector<string> splitedWords = splitString(inputString[i], &test);
		cout << "Case " << "#" << i + 1 << ":";
		for (int i = splitedWords.size() - 1; i > -1; i--) {
			cout << " " << splitedWords[i];
		}
		cout << "\n";
	}
}