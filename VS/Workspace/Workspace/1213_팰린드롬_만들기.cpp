#include<bits/stdc++.h>

using namespace std;

int alpabet[26];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		alpabet[str[i] - 'A']++;
	}
	int check = 0;
	int midIndex = 0;
	for (int i = 0; i < 26; i++) {
		if (alpabet[i] % 2 != 0) {
			check++;
			midIndex = i;
		}
	}
	if (check >= 2) {
		cout << "I'm Sorry Hansoo";
		return 0;
	}

}