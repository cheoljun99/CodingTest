#include<bits/stdc++.h>

using namespace std;

vector<string> pol = { "AAAA","BB" };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	int cnt = 0;
	string res="";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '.') {
			if (cnt != 0) {
				if (cnt % 2 != 0) {
					cout << -1;
					return 0;
				}
				else {
					while (cnt != 0) {
						if (cnt >= 4) {
							res+=pol[0];
							cnt -= 4;
						}
						else {
							res += pol[1];
							cnt -= 2;
						}
					}
				}
			}
			res += '.';

		}
		else {
			cnt++;
		}
	}
	if (cnt != 0) {
		if (cnt % 2 != 0) {
			cout << -1;
			return 0;
		}
		else {
			while (cnt != 0) {
				if (cnt >= 4) {
					res += pol[0];
					cnt -= 4;
				}
				else {
					res += pol[1];
					cnt -= 2;
				}
			}
		}
	}
	cout << res;
	return 0;

}