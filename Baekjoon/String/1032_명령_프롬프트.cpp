#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<string>vec(N,"");
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}

	for (int i = 0; i < vec[0].size(); i++) {
		for (int j = 0; j < N; j++) {
			if (vec[0][i] != vec[j][i]) {
				vec[0][i] = '?';
			}
		}
	}
	cout << vec[0];


}