#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	map<string, int>m;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		int num;
		cin >> num;
		if (m.find(str) == m.end()) {
			m.insert({str,num});
		}
		else {
			m[str] += num;
		}
	}

	for (auto i : m) {
		if (i.second == 5) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}