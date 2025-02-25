#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		map<string, int> oneGong;
		for (int i = 0; i < n; i++) {
			string word;
			cin >> word;
			oneGong.insert({ word,i });
		}
		vector<string>twoGong;
		for (int i = 0; i < n; i++) {
			string word;
			cin >> word;
			twoGong.push_back(word);
		}
		vector<string> crypto;
		for (int i = 0; i < n; i++) {
			string word;
			cin >> word;
			crypto.push_back(word);
		}
		vector<string> plain(n);
		for (int i = 0; i < n; i++) {
			plain[oneGong[twoGong[i]]] = crypto[i];
		}

		for (int i = 0; i < n; i++) {
			cout << plain[i]<<" ";
		}
		cout << '\n';
	}
}