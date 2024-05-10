#include <bits/stdc++.h>

using namespace std;

int L, C;
char chr[15];

int main() {
	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		cin >> chr[i];
	}
	sort(chr, chr + C);
	vector<int>assi(C,0);
	for (int i = L; i < C; i++) assi[i] = 1;
	do {
		string ans;
		int con_num = 0;//자음 개수
		int vow_num = 0;//모음 개수
		for (int i = 0; i < C; i++) {
			if (assi[i] == 0) {
				ans += chr[i];
				if (chr[i] == 'a' || chr[i] == 'e' || chr[i] == 'i' || chr[i] == 'o' || chr[i] == 'u') vow_num++;
				else con_num++;
			}
		}
		if (con_num >= 2 && vow_num >= 1) {
			cout << ans << '\n';
		}
	} while (next_permutation(assi.begin(), assi.end()));
}