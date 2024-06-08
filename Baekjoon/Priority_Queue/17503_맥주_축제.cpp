#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b) { 
	return a.second < b.second; 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N,M,K;
	cin >> N >> M >> K;

	vector<pair<int, int>>vec(K);//preference, Liver levels
	for (int i = 0; i < K; i++) cin >> vec[i].first >> vec[i].second;

	sort(vec.begin(), vec.end(),cmp);//Liver levels Ascending

	priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>>p_q; //preferences Ascending

	int sum = 0, ans = 0;
	for (int i = 0; i < K; i++) {
		if (i < N) {
			p_q.push(vec[i]);
			sum += vec[i].first;
		}
		else {
			if (sum >= M) {
				while (!p_q.empty()) {
					ans = max(ans, p_q.top().second);
					p_q.pop();
				}
				cout << ans;
				return 0;
			}
			else {
				sum -= p_q.top().first;
				p_q.pop();
				p_q.push(vec[i]);
				sum += vec[i].first;
			}
		}
	}
	if (sum >= M) {
		while (!p_q.empty()) {
			ans = max(ans, p_q.top().second);
			p_q.pop();
		}
		cout << ans;
	}
	else {
		cout << -1;
	}
	return 0;
}