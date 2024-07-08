#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<int> vec;
	while (N != 0) {
		int num = N % 10;
		vec.push_back(num);
		N /= 10;
	}
	sort(vec.begin(), vec.end(),greater<int>());
	for (auto i : vec)
		cout << i;
}