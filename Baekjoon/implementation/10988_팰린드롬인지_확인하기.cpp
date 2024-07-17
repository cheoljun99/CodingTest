#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	int k = str.size();
	//01234 12345 0123

	int j = k - 1;
	if (k % 2 == 0) {
		for (int i = 0; i <=(k - 1) / 2; i++) {
			if (str[i] != str[j]) {
				cout << 0;
				return 0;
			}
			j--;
		}
	}
	else {
		for (int i = 0; i <(k - 1) / 2; i++) {
			if (str[i] != str[j]) {
				cout << 0;
				return 0;
			}
			j--;
		}
	}
	cout << 1;
	return 0;
}
