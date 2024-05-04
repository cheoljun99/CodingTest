#include <bits/stdc++.h>



using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;

	cin >> N >> M;

	vector<int>vec_main(N,0);
	for (int i = 0; i < N; i++)cin >> vec_main[i];
	vector<int>vec_sub(N,1);
	for (int i = 0; i < M; i++)vec_sub[i]=0;

	sort(vec_main.begin(), vec_main.end(),less<int>());

	do {
		for (int i = 0; i < N; i++) {
			if (vec_sub[i] == 0)cout << vec_main[i] << " ";
		}
		cout << '\n';
	} while (next_permutation(vec_sub.begin(), vec_sub.end()));

}