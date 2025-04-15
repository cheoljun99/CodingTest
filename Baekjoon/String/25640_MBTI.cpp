#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	map<string, int>m;

	string temp;
	cin >> temp;
	int N;
	cin >> N;
	m.insert({ temp,0 });
	for (int i = 0; i < N; i++){
		string str;
		cin >> str;
		if (m.find(str) != m.end()) {
			m[str]++;
		}

	}
	cout << m[temp];
}