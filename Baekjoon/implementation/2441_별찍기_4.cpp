#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i<N; i++) {
		for (int j = 1; j <= i; j++) {
			cout << " ";
		}
		for (int j = N - i; j > 0; j--) {
			cout << "*";
		}
		cout << '\n';
	}
}