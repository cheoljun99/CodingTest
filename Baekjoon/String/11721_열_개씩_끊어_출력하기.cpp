#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		cnt++;
		cout << str[i];
		if (cnt == 10) {
			cnt = 0;
			cout << '\n';
		}

	}

}