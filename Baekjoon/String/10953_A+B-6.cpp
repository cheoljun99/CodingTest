#include<bits/stdc++.h>

using namespace std;

vector<string> stringSplit(string& str, char delimeter) {
	vector<string>result;
	string token="";
	stringstream ss(str);
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
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		vector<string> splitWords=stringSplit(str, ',');
		cout << stoi(splitWords[0])+stoi(splitWords[1])<<'\n';
	}

}