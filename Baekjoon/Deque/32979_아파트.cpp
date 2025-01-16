#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N, T;

	deque<int>deq;

	cin >> N;
	cin >> T;

	for (int i = 1; i <= 2 * N; i++) {
		int num;
		cin >> num;
		deq.push_back(num);
	}
	
	
	while (T--) {
		int B;
		cin >> B;
		int cnt = 1;
		while (cnt!= B) {
			int temp = deq.front();
			deq.push_back(temp);
			deq.pop_front();
			cnt++;
		}

		cout << deq.front()<<" ";
	}


}