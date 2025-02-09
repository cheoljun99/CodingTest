#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;

	cin >> N;

	unordered_map<string, int>um;

	um.insert({ "ChongChong",1 });

	while (N--) {

		string str1, str2;

		cin >> str1 >> str2;

		unordered_map<string, int>::iterator iter1 = um.find(str1);
		unordered_map<string, int>::iterator iter2 = um.find(str2);

		if (iter1 == um.end()) {
			um.insert({ str1,0 });
		}
		if (iter2 == um.end()) {
			um.insert({ str2,0 });
		}

		if (um[str1] == 1 || um[str2] == 0) {
			um[str2] = 1;
		}
		else if (um[str1] == 0 || um[str2] == 1) {
			um[str1] = 1;
		}

	}

	int res = 0;
	for (auto i : um) {
		if (i.second == 1) {
			res++;
		}
	}
	cout << res;
}