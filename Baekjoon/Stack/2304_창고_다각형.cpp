#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;

	cin >> N;

	vector<pair<int, int>>vec;
	int maxX=0, maxY=0;
	stack < pair<int, int>>st;

	for (int i = 0; i < N; i++) {
		int L, H;
		cin >> L >> H;
		vec.push_back({ L,H });
		if (H > maxY) {
			maxX = L;
			maxY = H;
		}
	}
	sort(vec.begin(), vec.end(), less<pair<int,int>>());

	int res = 0;
	int idx = 0;
	for (int i = 0; i < N; i++) {
		if (vec[i].first < maxX) {
			if (st.empty())
				st.push(vec[i]);
			else {
				if (st.top().second <= vec[i].second) {
					res += (vec[i].first - st.top().first) * st.top().second;
					st.pop();
					st.push(vec[i]);
				}
			}

		}
		else if (vec[i].first == maxX) {
			if (!st.empty()) {
				res += (vec[i].first - st.top().first) * st.top().second;
				st.pop();
			}
			res += vec[i].second;
			break;
		}
	}

	for (int i = N - 1; i >= 0; i--) {
		if (vec[i].first > maxX) {
			if (st.empty()) {
				st.push(vec[i]);
			}
			else {
				if (st.top().second <= vec[i].second) {
					res += ((st.top().first + 1) - (vec[i].first + 1)) * st.top().second;
					st.pop();
					st.push(vec[i]);

				}
			}
		}
		else if (vec[i].first == maxX) {
			if (!st.empty()) {
				res += ((st.top().first + 1) - (vec[i].first + 1)) * st.top().second;
				st.pop();
			}
			break;
		}
	}
	cout << res << '\n';

}