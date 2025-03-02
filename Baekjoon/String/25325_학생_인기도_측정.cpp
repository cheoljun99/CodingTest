#include<bits/stdc++.h>

using namespace std;

vector<string>splitString(string& str, char delimeter) {

	vector<string>result;
	string token;
	stringstream ss(str);

	while (getline(ss, token, delimeter)) {
		result.push_back(token);
	}
	
	return result;
}

bool cmp(pair<string, int> & a, pair<string, int>& b) {

	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second > b.second;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();
	string A;
	getline(cin, A);
	vector<string> AVec = splitString(A, ' ');
	map<string, int> m;

	for (int i = 0; i < AVec.size(); i++) {
		m.insert({ AVec[i],0 });
	}

	for (int i = 0; i < N; i++) {
		string info;
		getline(cin, info);
		vector<string>infoVec = splitString(info, ' ');
		for (int j = 0; j < infoVec.size(); j++) {
			m[infoVec[j]]++;
		}
	}
	vector<pair<string, int>>vec(m.begin(),m.end());
	sort(vec.begin(), vec.end(), cmp);
	for (pair<string, int> i : vec) {
		cout << i.first << " " << i.second << '\n';
	}

}