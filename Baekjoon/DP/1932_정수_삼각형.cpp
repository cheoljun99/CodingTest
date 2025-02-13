#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>>vec(n, vector<int>(n, -1));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <=i; j++) {
			if (i == 0) {
				cin >> vec[i][j];
			}
			else {
				int num;
				cin >> num;

				if (j - 1 < 0) {
					vec[i][j] = vec[i - 1][j] + num;
				}
				else if (j ==i) {
					vec[i][j] = vec[i - 1][j - 1] + num;
				}
				else {
					int left, right;
					left = vec[i - 1][j] + num;
					right = vec[i - 1][j - 1] + num;
					vec[i][j] = max(left, right);
				}


			}
		}
	}


	
	int res = 0;
	for (auto i : vec[n-1]) {
		if (res < i) {
			res = i;
		}
	}
	cout << res;

}