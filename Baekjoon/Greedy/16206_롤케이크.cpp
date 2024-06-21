#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int>vec_10;// 10의 배수
	vector<int>vec_rest;// 나머지
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (num % 10 == 0)
			vec_10.push_back(num);
		else
			vec_rest.push_back(num);
	}

	sort(vec_10.begin(), vec_10.end());
	sort(vec_rest.begin(), vec_rest.end());
	vector<int> vec_total(vec_10);
	vec_total.insert(vec_total.end(), vec_rest.begin(), vec_rest.end());

	int ans = 0;
	while (M > 0 && !vec_total.empty()) {
		int tmp = vec_total[0];
		int cake = tmp / 10;
		if (tmp % 10 == 0) {
			if (cake - 1 <= M) {//10의 배수일 때 cut 회수는 -1
				ans += cake;
				M -= cake - 1;
			}
			else {
				ans += M;
				break;
			}
		}
		else{
			if (cake <= M) {
				ans += cake;
				M -= cake;
			}
			else {
				ans += M;
				break;
			}
		}
		vec_total.erase(vec_total.begin());
	}
	cout << ans;

}