#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	//{한글, 한글} 한글깨지는지 테스트

	queue<int> q;

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		st.push(i);
	}
	while (!q.empty()) {
		q.pop();
		if (q.empty()) return 0;
		int cur = q.front();
		q.push(cur);
	}

}