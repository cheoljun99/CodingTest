#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	deque<int>deq;
	vector<int>A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		if (A[i] == 0) {
			deq.push_back(num);
		}
	}

	int M;
	cin >> M;
	
	vector<int>B(M);
	for (int i = 0; i < M; i++) cin >> B[i];
	for (int i = 0; i < M; i++) {
		deq.push_front(B[i]);
		int num = deq.back();
		deq.pop_back();
		cout << num << " ";
	}
}