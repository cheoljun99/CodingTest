#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	int alpa[26] = { 0, };

	for (int i = 0; i < str.length(); i++)
	{
		alpa[str[i] - 'a'] += 1;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << alpa[i] << ' ';
	}

	return 0;
}