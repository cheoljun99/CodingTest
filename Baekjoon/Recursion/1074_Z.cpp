#include<bits/stdc++.h>

using namespace std;


int recursive(int N, int r, int c) {

	int key = (int)pow(2, N) / 2;

	if (N == 1) {
		if (key <= r) {
			if (key <= c) return 3;
			return 2; // key>c
		}
		else {//key > r
			if (key <= c) return 1;
			return 0; // key>c
		}
	}
	else {
		if (key <= r) {
			if (key <= c) return (key * key * 3) + recursive(N - 1, r % key, c % key);
			else  return (key * key * 2) + recursive(N - 1, r % key, c % key); // key>c
		}
		else {//key > r
			if (key <= c)  return (key * key * 1) + recursive(N - 1, r % key, c % key);
			else  return recursive(N - 1, r % key, c % key); // key>c
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, r, c;
	cin >> N >> r >> c;

	cout << recursive(N, r, c);
}