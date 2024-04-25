#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, L;

	cin >> N >> L;
	//{인덱스, 값} 한글 깨짐 확인
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;
		
		pq.push({num,i});

		while (pq.top().second < i - L + 1) {
			pq.pop();
		}
		cout << pq.top().first << " ";
	}
}