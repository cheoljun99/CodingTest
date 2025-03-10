#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s, t;
	while (cin >> s >> t) {
		int sCount = 0;
		bool isTrue = false;
		for (int i = 0; i < t.length(); i++) {
			if (s[sCount] == t[i]) {
				sCount++;
			}
			if (sCount == s.length()) {
				isTrue = true;
				break;
			}
		}
		if (isTrue) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}


	return 0;
}