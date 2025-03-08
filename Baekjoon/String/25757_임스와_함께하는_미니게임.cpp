#include<bits/stdc++.h>

using namespace std;

map<char, int> game = { {'Y',1},{'F',2}, {'O',3} };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	char play;
	cin >> N >> play;

	map<string, int>person;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (person.find(str) == person.begin()) {
			person.insert({str, 1});
		}
		else {
			person[str]++;
		}
	}

	cout << person.size() / game[play];

}