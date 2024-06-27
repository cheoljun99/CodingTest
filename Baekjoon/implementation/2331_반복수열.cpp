#include <bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, P;
	cin >> A >> P;

	unordered_map<int, int> un_map;

	while (un_map[A] < 2) {
		un_map[A]++;
		int num = 0;
		while ((A / 10) != 0) {
			num += pow((A % 10),P);
			A = A / 10;
		}
		if (A != 0) {
			num += pow(A, P);
		}
		A = num;
	}

	int ans = 0;
	for (auto i : un_map) {
		if (i.second == 1)
			ans++;
	}
	cout << ans;

}