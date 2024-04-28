#include<bits/stdc++.h>

using namespace std;

long long recursive(long long A, long long B, long long C) {

	if (B == 1) {
		return A % C;
	}
	long long twice = recursive(A, B / 2, C);
	if (B % 2 == 1) {
		return twice % C * twice % C * A % C;
	}
	else {
		return twice % C * twice % C;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long A, B, C;
	cin >> A >> B >> C;

	cout << recursive(A, B, C);

}