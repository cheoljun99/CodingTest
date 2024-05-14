#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		vector<pair<int, int>> vec(N);
		for (int i=0; i < N; i++) {
			cin >> vec[i].first;
			cin >> vec[i].second;
		}
		sort(vec.begin(), vec.end(),less<pair<int,int>>());
		int cmp = vec[0].second;
		int ans = 0;

		for (int i = 0; i < N; i++) {
			if (cmp >= vec[i].second) {
				cmp = vec[i].second;
				ans++;
			}
		}
		cout << ans<<'\n';
		
	}
}
/*서류심사 등수가 높은 순으로 순회하기전 서류심사 등수가 가장 높은 사람의 면접 성적 등수를 cmp에 저장하고 있다가 
순회하면서 저장한 면접 등수와 순회중 선택된 사람의 면접 등수를 비교해 선택된 사람의 면접 등수가 더 좋을 경우 cnt에 1을 더해주고 
cmp를 갱신합니다.
(그렇지 않다면 선택된 사람보다 면접 성적 점수도 좋고 서류심사 성적도 좋은 사람이 있다는 소리이다.)
이렇게 하면 O(N)으로 해결이 가능.
*/