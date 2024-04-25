#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	//{높이, 위치}
	stack<pair<int, int>> st;

	st.push({ 1000000001,0 });

	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int height;
		cin >> height;
		while (st.top().first < height)
			st.pop();
		cout << st.top().second << " ";
		st.push({ height,i });

	}
}