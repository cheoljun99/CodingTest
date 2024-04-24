#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	stack<int> st;
	int cnt = 1;
	string ans = "";
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		while (cnt <= num) {
			st.push(cnt++);
			ans += "+\n";
		}
		if (st.top() != num) {
			cout << "NO" << '\n';
			return 0;
		}
		st.pop();
		ans += "-\n";
	}
	cout << ans;
}