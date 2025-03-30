#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		string init;
		string final;
		cin >> init >> final;

		int b_count = 0;
		int w_count = 0;
		for (int j = 0; j < N; j++) {
			if (init[j] != final[j]) {
				if (init[j] == 'W')
					w_count++;
				else
					b_count++;
			}
		}
		if (b_count >= w_count) {
			cout << b_count - w_count + w_count << '\n';
		}
		else {
			cout << w_count - b_count + b_count << '\n';
		}

	}

}