#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, P;

	cin >> N >> P;

	stack<int> st[7];
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int A, B;
		cin >> A >> B;
		if (st[A].empty()) {
			st[A].push(B);
			cnt++;
		}
		else {
			if (st[A].top() < B) {
				st[A].push(B);
				cnt++;
			}
			else if (st[A].top() == B) {
				continue;
			}
			else {
				while (!st[A].empty()&&st[A].top() > B) {
					st[A].pop();
					cnt++;
				}
				if (!st[A].empty() && st[A].top() == B) {
					continue;
				}
				else {
					st[A].push(B);
					cnt++;
				}
			}
		}
	}
	cout << cnt;

}