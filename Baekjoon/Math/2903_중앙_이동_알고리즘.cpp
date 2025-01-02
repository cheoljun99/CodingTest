#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int R = pow(2, N) + 1;
	R = R * R;

	cout << R << '\n';
}