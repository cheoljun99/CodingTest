#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = N; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << '*';
		
		}
		if (i == 1) {
			return 0;
		}
		cout << "\n";

	}

}