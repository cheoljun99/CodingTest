#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str1;
	string str2;


	int cnt1[26] = {};
	int cnt2[26] = {};

	cin >> str1;
	cin >> str2;

	for (int i = 0; i < str1.size(); i++) {
		cnt1[str1[i] - 'a']++;
	}
	for (int i = 0; i < str2.size(); i++) {
		cnt2[str2[i] - 'a']++;
	}

	int answer=0;
	for (int i = 0; i < 26; i++) {
		answer += abs(cnt1[i] - cnt2[i]);
	}
	cout << answer;

}