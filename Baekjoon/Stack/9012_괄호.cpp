#include<bits/stdc++.h>

using namespace std;

int recursive(int A, int B,int C) {

	if (B == 0) {
		return A % C;
	}

	int twice=recursive(A, B / 2, C);

	if (B % 2 == 1) {
		return (twice*twice*A) % c;
	}

	else {
		return (twice * twice) % c;
	}


}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A,B,C;
	cin >> A>>B>>C;

	cout << recursive(A, B, C);

}