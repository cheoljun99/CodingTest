#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int T;
	cin >> T;

	while (T--) {

		int n;
		cin >> n;

		map<string, int> m;
		while (n--) {

			string str1, str2;

			cin >> str1>>str2;

			auto iter = m.find(str2);
			if (iter == m.end()) {
				m.insert({ str2,2 });
			}
			else {
				m[str2]++;
			}


		}
		int res = 1;
		for (auto i : m) {
			res *= i.second;
		}
		cout << res - 1 << '\n';
	}

}