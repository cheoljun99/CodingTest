#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string s, p;

		cin >> s >> p;

		int cnt = 0;
		while (s.find(p) != string::npos) {
			cnt++;
			s.erase(s.find(p), p.size());
		}
		cout << cnt + s.size() << '\n';
	}


}