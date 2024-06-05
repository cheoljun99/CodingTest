#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int K;
	cin >> K;
	queue<int>q;
	for (int i = 0; i < N; i++) q.push(i + 1);

	int cnt = 1;
	cout << "<";
	while (!q.empty()) {
		if (cnt ==K ) {
			cout << q.front();
			cnt = 1;
			q.pop();
			if (!q.empty()) {
				cout << "," << " ";
			}
		}
		else {
			int num = q.front();
			q.pop();
			q.push(num);
			cnt++;
		}
	}
	cout << ">";
	
}