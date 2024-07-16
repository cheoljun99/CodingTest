#include<bits/stdc++.h>

using namespace std;
int table[1000005];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long min;
	long long max;
	cin >> min >> max;
	
	for (long long i = 2; i <= sqrt(max); i++) {
		long long x =min/( i * i);
		if (min % (i * i) != 0) x++;
		while (x * (i * i) <=max) {
			table[x * (i * i) - min] = 1;
			x++;
		}
	
	}
	int ans = 0;
	for (int i = 0; i <= max - min; i++) {
		if (!table[i])ans++;
	}
	cout << ans;

}
