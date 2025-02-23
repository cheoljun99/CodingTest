#include<bits/stdc++.h>

using namespace std;

vector<string>splitString(string& str, char delimeter) {
	vector<string>ret;
	string token;
	stringstream ss(str);
	while (getline(ss, token, delimeter)) {
		ret.push_back(token);
	}
	return ret;
}
bool cmp(string a, string b) {
	vector<string> splitA = splitString(a, ' ');
	vector<string> splitB = splitString(b, ' ');

	int yearA = stoi(splitA[3]);
	int yearB = stoi(splitB[3]);
	
	if (yearA == yearB) {
		int monthA = stoi(splitA[2]);
		int monthB = stoi(splitB[2]);
		if (monthA == monthB) {
			int dayA = stoi(splitA[1]);
			int dayB = stoi(splitB[1]);
			return dayA <= dayB;
		}
		return monthA < monthB;
	}
	return yearA < yearB;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	cin.ignore();
	vector<string>a;
	for(int i=0;i<N;i++){
		string str;
		getline(cin, str);
		a.push_back(str);
	}
	sort(a.begin(), a.end(), cmp);
	vector<string>top = splitString(a[N - 1], ' ');
	vector<string>bottom = splitString(a[0], ' ');
	cout << top[0] << '\n';
	cout << bottom[0] << '\n';

}