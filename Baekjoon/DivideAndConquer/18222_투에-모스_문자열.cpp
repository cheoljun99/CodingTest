#include<bits/stdc++.h>

using namespace std;

long long recursive(long long k) {

	if (k == 1) {
		return 0;
	}
	long long temp = 1;
	while (1) {
		if (temp < k) {
			temp *= 2;
		}
		else {
			break;
		}
	}
	return ~recursive(k - temp / 2);
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	long long k;
	cin >> k;

	cout << recursive(k);

}