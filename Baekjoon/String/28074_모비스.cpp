#include<bits/stdc++.h>

using namespace std;

map<char, int> m = { {'M',0},{'O',0}, {'B',0}, {'I',0}, {'S',0}, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (m.find(str[i]) != m.end()) {
			m[str[i]]++;
		}
	}
	for (auto i : m) {
		if (i.second == 0) {
			cout << "NO" << '\n';
			return 0;
		}
	}
	cout << "YES" << '\n';
	return 0;
	


}