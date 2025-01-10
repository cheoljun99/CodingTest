#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	map<string, string, greater<string>>m; // map을 내림차순으로 정렬

	while (N--) {

		string str1;
		string str2;

		cin >> str1 >> str2;

		auto iter = m.find(str1);

		if (iter == m.end()) {
			m.insert({ str1,str2 });
		}
		else {
			m[str1] = str2;
		}
	}
	for (auto i : m) {
		if (i.second == "enter") {
			cout << i.first << "\n";
		}
	}


}