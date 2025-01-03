#include<bits/stdc++.h>

using namespace std;

int main() {

	int P = 1;

	int N = 0;

	cin >> N;

	int count = 0;
	while (N > 0) {
		N = N - P;
		if (P == 1)
			P = P * 6;
		else
			P = P + 6;
		count++;
	}

	cout << count;

}