#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	map<string, int>S_m1_I;

	map<int, string>I_m2_S;


	vector<int>check(N, 0);
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		S_m1_I.insert({ str,i});
	}

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		I_m2_S.insert({ i,str });
	}

	int res = 0;
	for (int i = 0; i < N; i++){

		for (int j = i + 1; j < N; j++) {
			if (S_m1_I[I_m2_S[i]] > S_m1_I[I_m2_S[j]]) {
				res++;
				break;
			}
		}

		
	}
	cout << res;
} 