#include<bits/stdc++.h>

using namespace std;

long long int factorial(int n) {
	if (n < 2) return 1;
	return n * factorial(n - 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	cout << factorial(N);

}