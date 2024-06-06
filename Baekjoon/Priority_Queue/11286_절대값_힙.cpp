#include <bits/stdc++.h>

using namespace std;

struct cmp{
	bool operator()(int a, int b) {
		if (abs(a) ==abs(b))
			return a > b;
		return abs(a) > abs(b);
	}
	//두번째 인자가 먼저 나가는 거임 맥스힙의 구조를 따른다면 기본값은 a<b인 상태임
};
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, cmp> p_q;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		if (num == 0) {
			if (p_q.empty()) cout << 0 << '\n';
			else {
				cout << p_q.top() << '\n';
				p_q.pop();
			}
		}
		else p_q.push(num);
	}

}