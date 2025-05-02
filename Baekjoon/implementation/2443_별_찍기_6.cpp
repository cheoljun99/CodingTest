#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N;
	cin >> N;

	for (int i = N; i >= 1; i--) {
		for (int j = i; j < N; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		if (i != 1) {
			cout << " ";
			cout << '\n';

		}
	}
}