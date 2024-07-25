#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int table[9][9] = {0};

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cin >> table[i][j];
	int max_num=0, max_i=0, max_j=0;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (table[i][j] >= max_num) {
				max_num = table[i][j];
				max_i = i + 1;
				max_j = j + 1;
			}
	cout << max_num<<'\n';
	cout << max_i << ' ' << max_j;

}
