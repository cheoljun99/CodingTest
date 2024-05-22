#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) {
	if (a.size() == b.size()) {
		int a_sum = 0;
		int b_sum = 0;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] >= '0' && a[i] <= '9') a_sum += a[i]-'0';
			if (b[i] >= '0' && b[i] <= '9') b_sum += b[i]-'0';
		}
		if (a_sum == b_sum) {
			return a < b;
		}
		else return a_sum < b_sum;
	}
	else return a.size() < b.size();
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	vector<string>vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end(), cmp);

	for (auto i : vec) {
		cout << i << '\n';
	}

}