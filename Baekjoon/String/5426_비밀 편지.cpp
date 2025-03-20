#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		int size = sqrt(str.size());
		vector<vector<char>>temp(size,vector<char>(size));
		int idx = 0;
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				temp[j][k] = str[idx];
				idx++;
			}
		}
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				cout << temp[k][(size-j)-1];
			}
		}
		cout << '\n';
	}

}