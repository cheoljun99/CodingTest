#include <bits/stdc++.h>

using namespace std;
int N;
int main_arr[13];// 주 수열
int assi_arr[13];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (1) {
		cin >> N;
		memset(main_arr, 0, sizeof(int) * 13);
		if (N == 0)
			return 0;
		else {
			for (int i = 0; i < N; i++)
				cin >> main_arr[i];
			for (int i = 6; i < N; i++)
				assi_arr[i] = 1; //N개 중에 6개 순서없이 뽑는 경우의 수를 구하기
			do {
				for (int i = 0; i < N; i++)if (!assi_arr[i])cout << main_arr[i] << " ";
				cout << "\n";
			} while (next_permutation(assi_arr, assi_arr + N));
			cout<< "\n";
		}
	}
}