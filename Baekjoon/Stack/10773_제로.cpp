#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int K;
	cin >> K;
	stack<int> st;
	int cnt = 1;
	int sum = 0;
	st.push(0);

	for (int i = 1; i <= K; i++) {
		int num;
		cin >> num;
		if (num == 0)st.pop();
		else st.push(num);
	}
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;
}