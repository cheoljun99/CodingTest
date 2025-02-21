#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<string> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}


	map<string, int>m;
	sort(vec.begin(), vec.end());
	do {
		string str;
		for (int i = 0; i < k; i++) {
			str += vec[i];
		}
		auto iter = m.find(str);
		if (iter == m.end())
			m.insert({ str,1 });
	} while (next_permutation(vec.begin(), vec.end()));

	cout << m.size();
}