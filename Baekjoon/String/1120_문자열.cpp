#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string A;
	string B;

	cin >> A >> B;

	int res = 100;
	for (int i = 0; i < B.size(); i++) {
		if ((B.size() - i) < A.size())
			break;

		int cnt = 0;
		for (int j = 0; j < A.size(); j++) {
			if (A[j] != B[i + j])
				cnt++;
		}
		if (cnt < res)
			res = cnt;
	}
	cout << res;

}