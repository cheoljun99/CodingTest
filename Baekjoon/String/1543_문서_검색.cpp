#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str1;
	getline(cin, str1);
	string str2;
	getline(cin, str2);

	int res = 0;
	for (int j = 0; j < str1.size(); j++) {
		int cnt = 0;
		for (int i = j; i < str1.size(); i++) {
			if (str2.size() > str1.size() - i)
				break;
			string temp = str1.substr(i, str2.size());
			if (temp == str2) {
				cnt++;
				i += str2.size() - 1;
			}
		}
		if (res < cnt) {
			res = cnt;
		}
	}
	cout << res;
}