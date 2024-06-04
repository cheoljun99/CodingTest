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
/*sort �Լ��� Quick ������ ����ϱ� ������ ���� ���� ���� ���� ���ҵ��� ������ ó�� ���¿� ���� ���� �� �ִ�. ��, �Ҿ���(unstable) �� ������ �ȴ�.
stable_sort() �Լ��� Quick ���� ��� Merge ������ ���� ������ �����Ѵ�. �̶� Merge ������ ���� ���� ���� ���ҵ��� ������ �������ֱ� ������ ������ ������ �ȴ�.*/