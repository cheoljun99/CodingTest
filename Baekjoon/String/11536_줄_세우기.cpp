#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<string>vec;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		vec.push_back(str);
	} 

	int chk = 0;
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			if (vec[i] > vec[i+1]) {
				chk = 1;
			}
			else if (vec[i] < vec[i + 1]) {
				chk = -1;
			}
		}
		else if (i < N - 1) {
			if (chk == 1) {
				if (vec[i] < vec[i + 1]) {
					cout << "NEITHER";
					return 0;
				}
			}
			else if (chk == -1) {
				if (vec[i] > vec[i + 1]) {
					cout << "NEITHER";
					return 0;
				}
			}
		}
		else if (i == N - 1) {
			if (vec[i - 1] < vec[i])
				cout << "INCREASING";
			else
				cout << "DECREASING";
		}
	}
	printf("%d", vec);
	return 0;
}