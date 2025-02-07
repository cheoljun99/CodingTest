#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	map<string, double> m;
	int cnt = 0;
	string str;
	while (getline(cin, str)) {

		auto iter = m.find(str);
		if (iter == m.end()) {
			m.insert({ str,1 });
		}
		else {
			m[str]++;
		}
		cnt++;
	}

	cout << fixed;
	cout.precision(4);

	for (auto i : m) {
		cout << i.first << " " << i.second / cnt * 100 << '\n';
	}
}