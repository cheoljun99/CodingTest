#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N,K;
	cin >> N >> K;

	vector<int>vec;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (num == 1) vec.push_back(i);
		//라이언이 1인 경우를 벡터에 저장하고 3개씩 확인하는 투포인트 기법(슬라이딩 윈도우)
	}
	if (vec.size()<K) {
		cout <<-1;
		return 0;
	}
	int ptr1 = 0;
	int ptr2 = K - 1;
	int ans = 1000001;
	for (int i = 0; i <= vec.size()-K; i++) {
		ans=min(ans, vec[ptr2] - vec[ptr1] + 1);
		ptr1++;
		ptr2++;
	}
	cout << ans;
}
