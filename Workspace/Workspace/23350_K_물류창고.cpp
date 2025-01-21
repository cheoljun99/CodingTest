#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	queue<pair<int, int>> q;
	stack<pair<int, int>>rm;
	stack<pair<int, int>>st;

	
	cin >> N>>M;

	vector<int>vec(N+1);

	for (int i = 0; i < N; i++) {
		int P, W;
		cin >> P >> W;
		q.push({ P,W });
		vec[P]++;
	}

	int check = M;
	int count = 0;
	int res = 0;
	while (!q.empty()) {
		
		if (q.front().first == M&&count<vec[M]) {
			if (st.empty()) {
				res += q.front().second;
				st.push(q.front());
				q.pop();
			}
			else if(q.front().first<st.top().first) {
				res += q.front().second;
				st.push(q.front());
				q.pop();
			}
			else if (q.front().first == st.top().first) {
				if (q.front().second < st.top().second) {
					res += q.front().second;
					st.push(q.front());
					q.pop();
				}
				else {
					while (!st.empty() && q.front().first == st.top().first) {
						res += st.top().second;
						rm.push(st.top());
						st.pop();
					}
					res += q.front().second;
					st.push(q.front());
					q.pop();
					while (!rm.empty()) {
						res += rm.top().second;
						st.push(rm.top());
						rm.pop();
					}
				}
			}
			count++;
			if (count == vec[M]) {
				count = 0;
				M--;
			}
		}
		else if (q.front().first != M && count < vec[M]) {
			res += q.front().second;
			q.push(q.front());
			q.pop();
		}
	}
	cout << res;
}