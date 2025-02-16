#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	priority_queue<long long,vector<long long>,greater<long long>>pQ;

	for (int i = 0; i < n; i++) {
		long long a;
		cin >> a;
		pQ.push(a);
	}

	for (int i = 0; i < m; i++) {
		long long x = pQ.top();
		pQ.pop();
		long long y = pQ.top();
		pQ.pop();
		long long temp = x + y;
		pQ.push(temp);
		pQ.push(temp);
	}
	long long res = 0;
	while (!pQ.empty()) {
		res += pQ.top();
		pQ.pop();
	}
	cout << res;
}