#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<string>vec;
	vector<string>temp;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		vec.push_back(str);
		temp.push_back("");
	}

	for (int i = 0; i < vec[0].size(); i++) {
		for (int j = 0; j < N; j++) {
			temp[j] += vec[j][vec[0].size() - (i + 1)];
		}
		set<string>s;
		for (int j = 0; j < N; j++) {
			s.insert(temp[j]);
		}
		if (s.size() == N) {
			cout << i + 1;
			return 0;
		}
	}

}