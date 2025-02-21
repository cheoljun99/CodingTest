#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	map<string, int>m;
	while (N--) {
		bool checker = 0;
		string input;
		string name="";
		string file="";

		cin >> input;
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '.') {
				checker = 1;
				continue;
			}
			if (checker) {
				file += input[i];
			}
			else {
				name += input[i];
			}
		}
		auto iter = m.find(file);
		if (iter == m.end()) {
			m.insert({ file,1 });
		}
		else
			m[file]++;

	}

	for (auto i : m) {
		cout << i.first << ' ' << i.second << '\n';
	}

}