#include<bits/stdc++.h>

using namespace std;

int main()
{

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	map<string, int> m;

	int N, M;

	cin >> N>> M;
	while (N--) {
		string str;
		cin >> str;
		m.insert({ str,0 });
	}

	int cnt = 0;
	while (M--) {
		string str2;
		cin >> str2;
		auto iter = m.find(str2);

		if (iter != m.end()) {
			cnt++;
		}
	}
	cout << cnt;


}