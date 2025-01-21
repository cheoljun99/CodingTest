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

	int check = 0;
	for (int i = 0; i < N; i++) {
		int P, W;
		cin >> P >> W;
		q.push({ P,W });
		vec[P]++;
		if (check < P)
			check = P;
	}


	int count = 0;
	int res = 0;
	while (!q.empty()) {
		
		if (q.front().first == check &&vec[check]>0) {
			if (st.empty()) {
				//cout<<"���߻� ��" << q.front().second << "\n";
				res += q.front().second;
				st.push(q.front());
				q.pop();
			}
			else if(q.front().first<st.top().first) {
				//cout << "���߻� ��" << q.front().second << "\n";
				res += q.front().second;
				st.push(q.front());
				q.pop();
			}
			else if (q.front().first == st.top().first) {
				if (q.front().second <= st.top().second) {
					//cout << "���߻� ��" << q.front().second << "\n";
					res += q.front().second;
					st.push(q.front());
					q.pop();
				}
				else {
					while (!st.empty() && q.front().first == st.top().first&& q.front().second > st.top().second) {
						//cout << "���߻� ��" << st.top().second << "\n";
						res += st.top().second;
						rm.push(st.top());
						st.pop();
					}
					//cout << "���߻� ��" << q.front().second << "\n";
					res += q.front().second;
					st.push(q.front());
					q.pop();
					while (!rm.empty()) {
						//cout << "���߻� ��" << rm.top().second << "\n";
						res += rm.top().second;
						st.push(rm.top());
						rm.pop();
					}
				}
			}
			vec[check]--;
			if (vec[check] == 0) {
				check--;
			}
		}
		else if (q.front().first != check) {
			//cout << "���߻� ĥ" << q.front().second << "\n";
			res += q.front().second;
			q.push(q.front());
			q.pop();
		}
	}

	cout << res;
}