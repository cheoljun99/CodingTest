#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;


	cin >> N >> M;

	vector<pair<int,int>> Rs(N);
	vector<int> Wk(M + 1);

	for (int i = 0; i < N; i++) {
		Rs[i].first = i + 1;
		cin >> Rs[i].second;
	}
	sort(Rs.begin(), Rs.end(), greater<pair<int,int>>());
	for (int i = 1; i <= M; i++) {
		cin >> Wk[i];
	}
	int res = 0;
	queue<tuple<int,int,pair<int,int>>>q;
	queue<pair<int, int>>wait;
	for (int i = 1; i <= M * 2; i++) {
		int num;
		cin >> num;
		if (num > 0 && !Rs.empty()) {
			q.push({ num,Wk[num],Rs.back()});
			Rs.pop_back();
		}
		else if (num > 0 && Rs.empty()) {
			wait.push({ num,Wk[num] });
		}
		else if(num<0){
			int tmp = num * -1;
			while (tmp != get<0>(q.front())) {
				q.push(q.front());
				q.pop();
			}
			res += get<2>(q.front()).second * get<1>(q.front());
			Rs.push_back(get<2>(q.front()));
			sort(Rs.begin(), Rs.end(), greater<pair<int, int>>());
			if (!wait.empty()) {
				q.push({ wait.front().first,wait.front().second,Rs.back()});
				Rs.pop_back();
				wait.pop();
			}
			q.pop();
		}
	}
	cout << res;

}