#include<bits/stdc++.h>

using namespace std;

/*두 번째 줄에는 길이가 N인 수열 A가 주어진다.Ai가 x이면, 
i번째로 카드를 내려놓을 때 x번 기술을 썼다는 뜻이다.
Ai는 1, 2, 3 중 하나이며, An은 항상 1이다.*/

// 즉 항상 위에서 부터 1 ~ N 이므로 N번째로 두는 카드는 1이다. 명심할 것
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int>vec(N+1);
	for (int i = 0; i < N; i++) {
		cin >> vec[i+1];
	}

	deque<int>deq;

	int cnt = 1;
	for (int i = N; i >=1; i--) {
	
		if (vec[i] == 1) {
			deq.push_back(cnt);
		}

		else if (vec[i] == 2) {
			int temp = deq.back();
			deq.pop_back();
			deq.push_back(cnt);
			deq.push_back(temp);
			
		}
		else if (vec[i] == 3) {
			deq.push_front(cnt);
		}
		cnt++;
	}

	while (!deq.empty()) {
		cout << deq.back() << " ";
		deq.pop_back();
	}

}