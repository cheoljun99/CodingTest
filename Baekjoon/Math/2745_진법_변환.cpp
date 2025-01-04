#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string B;
	int N;
	cin >> B >>N;

	int cnt = 0;
	int res = 0;
	while (cnt < B.size()) {
		res = res + ((B[cnt] < 'A' ? B[cnt] - '0' : B[cnt] - 'A' + 10)*pow(N,B.size()-cnt-1));
		cnt++;
	}
	cout << res;
}