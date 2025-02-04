#include<bits/stdc++.h>

using namespace std;

int alphabet[26];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;
	char* pstr = new char[str.size()];
	for (int i = 0; i < str.size(); i++) {
		alphabet[str[i] - 'A']++;
	}
	int check = 0;
	int midIndex = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] % 2 != 0) {
			check++;
			midIndex = i;
			pstr[str.size() / 2] = i + 'A';
		}
	}
	if (check >= 2) {
		cout << "I'm Sorry Hansoo";
		return 0;
	}
	int left = 0, right = str.size() - 1;

	for (int i = 0; i < 26; i++) {
		while (alphabet[i] > 1) {
			pstr[left] = i + 'A';
			pstr[right] = i + 'A';
			left++;
			right--;
			alphabet[i] -= 2;
		}
	}
	for (int i = 0; i < str.size(); i++) {
		cout << pstr[i];
	}
	delete pstr;
}