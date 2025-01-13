#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;

	cin >> S;

	map<string, int>m;

	for (int i = 0; i < S.size(); i++) {
		string str="";
		for (int j = i; j < S.size(); j++) {
			str += S[j];
			auto iter = m.find(str);
			if (iter == m.end())
				m.insert({ str,0 });

		}
	}

	int cnt = 0;
	for (auto i : m)
		if (i.second == 0)
			cnt++;

	cout << cnt;;

}