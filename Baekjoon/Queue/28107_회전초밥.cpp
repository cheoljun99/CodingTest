#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	cin >> N >> M;

	queue<int> * q = new queue<int>[200001];
	vector<int> vec(N,0);


	for (int i = 0; i < N; i++) {
		int k;
		cin >> k;
		for (int j = 0; j<k; j++) {
			int A;
			cin >> A;
			q[A].push(i);
		}
	}

	for (int i = 0; i < M; i++) {

		int B;
		cin >> B;

		if (!q[B].empty()) { // 큐가 비어있지 않은 경우
			int current = q[B].front(); // 큐의 첫 번째 요소 가져오기
			vec[current]++; // 해당 사람의 초밥 카운트 증가
			q[B].pop(); // 큐에서 하나만 제거
		}

	}

	for (auto i : vec) {
		cout << i << " ";
	}

}