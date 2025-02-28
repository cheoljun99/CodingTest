#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<map<char, int>>freq(M);
	for (int i = 0; i < M; i++) {
		freq[i].insert({ 'A',0});
		freq[i].insert({ 'C' ,0});
		freq[i].insert({ 'G',0});
		freq[i].insert({ 'T',0});
	}

	for (int i = 0; i < N; i++) {
		string DNA;
		cin >> DNA;
		for (int j = 0; j < M; j++) {
			freq[j][DNA[j]]++;
		}
	}

	string resultString = "";
	int resultHamming = 0;

	for (int i = 0; i < M; i++) {
		int count = 0;
		char oneDNA = 0;
		for (auto j : freq[i]) {
			if (j.second > count) {
				count = j.second;
				oneDNA = j.first;
			}
		}

		resultHamming += (N - count);
		resultString += oneDNA;
	}
	cout << resultString<<'\n';
	cout << resultHamming;
}