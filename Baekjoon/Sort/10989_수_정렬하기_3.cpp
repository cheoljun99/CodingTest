#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int arr[10001] = {0};
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 1; j <= arr[i]; j++) {
			cout << i <<  '\n';
		}
	}
}
