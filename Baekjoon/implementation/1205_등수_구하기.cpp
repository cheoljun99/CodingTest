#include <bits/stdc++.h>

using namespace std;
//stable_sort
bool cmp(pair<int, int> a, pair<int, int>b) {

	return a.first > b.first;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, new_score, P;
	cin >> N >> new_score >> P;

	//점수, 체크 포인트(기존:0 새점수:1)
	vector<pair<int,int>>vec;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		vec.push_back({ num,0 });
	}

	vec.push_back({ new_score,1 });

	stable_sort(vec.begin(), vec.end(),cmp);

	int ans = 0;
	int real_rank = 0;
	int front_score = 0;
	int same_rank = 0;
	for (vector<pair<int, int>> ::iterator iter = vec.begin(); iter != vec.end(); iter++) {
		if (iter == vec.begin()) {
			front_score = (*iter).first;
			real_rank++;
		}
		else {
			if (front_score !=(*iter).first){
				front_score = (*iter).first;
				real_rank+=(same_rank+1);
				same_rank = 0;
			}
			else {
				same_rank++;
			}
		}
		if ((*iter).second == 1) {
			ans = iter - vec.begin();
			break;
		}
	}
	if (ans >= P)
		cout << -1;
	else
		cout << real_rank;
}