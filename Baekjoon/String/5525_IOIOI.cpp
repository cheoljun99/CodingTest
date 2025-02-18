#include<bits/stdc++.h>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N, M;
	string S;
	cin >> N >> M >> S;

	int res = 0;
	for (int i = 0; i < M; i++) {
		int IOI = 0;
		if (S[i] == 'I') {
			while (S[i+1] == 'O' && S[i+2] == 'I') {
				IOI++;
				if (IOI == N) {
					res++;
					IOI--;
				}
				i += 2;
			}
		}
		else {
			continue;
		}
	}
	cout << res;
}