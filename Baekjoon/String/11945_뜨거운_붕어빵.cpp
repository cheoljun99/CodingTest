#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<string>vec;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		vec.push_back(str);
	}

	for (int i = 0; i < N; i++) {
		reverse(vec[i].begin(), vec[i].end());
		cout << vec[i]<<'\n';
	}
	


}