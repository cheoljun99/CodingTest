#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for(int i=1;i<=T;i++){
		int A_H;
		int A_M;
		int B_H;
		int B_M;

		cin >> A_H >> A_M >> B_H >> B_M;

		int carry_H=0;

		int result_M = 0;
		int result_H = 0;
		if (A_M + B_M >= 60) {
			result_M = A_M + B_M - 60;
			carry_H = (A_M + B_M) / 60;
		}
		else result_M = A_M + B_M;

		if (A_H + B_H + carry_H >= 13) result_H = A_H + B_H + carry_H - 13 +1;
		else result_H = A_H + B_H + carry_H;

		cout << "#" << i << " " << result_H << " " << result_M << "\n";
	}
}