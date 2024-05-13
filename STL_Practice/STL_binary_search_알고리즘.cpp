#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
	if (binary_search(arr, arr + 10, 0)) {
		cout << "바이너리 서치로 찾았습니다." << '\n';
	}

	if (!binary_search(arr, arr + 10, 100)) {
		cout << "바이너리 서치로 못찾았습니다." << '\n';
	}
	// 찾으면 반환값 bool 타입으로 1 못찾으면 0

}