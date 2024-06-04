#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {

	return a.first < b.first;
}
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;

	cin >> N;
	vector<pair<int, string>>vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec[i].first;
		cin >> vec[i].second;
	}
	stable_sort(vec.begin(), vec.end(),cmp);

	for (auto i : vec) {
		cout << i.first << " " << i.second << '\n';
	}

}
/*sort 함수는 Quick 정렬을 사용하기 때문에 서로 같은 값을 가진 원소들의 순서가 처음 상태와 같지 않을 수 있다. 즉, 불안정(unstable) 한 정렬이 된다.
stable_sort() 함수는 Quick 정렬 대신 Merge 정렬을 통해 정렬을 수행한다. 이때 Merge 정렬은 같은 값을 갖는 원소들의 순서를 보장해주기 때문에 안정한 정렬이 된다.*/