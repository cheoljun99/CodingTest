#include<bits/stdc++.h>

using namespace std;

bool check[2000001];// 두수의 차를 구할때 연산에 사용되는 숫자를 저장하기 위한 배열 (경우의 수 중에서 x가 2000000이고 ai가 1인 경우 차이가 1999999인데 해당 수까지 체크해야하므로 2000001크기로 잡음)

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++) {

		cin >> vec[i];
		check[vec[i]] = true;

	}

	int x;
	cin >> x;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (x - vec[i] > 0 && check[x - vec[i]] == true) // x를 이루는 두수를 찾는 과정 중 같은 숫자를 2번씩 탐색하므로 마지막에 나누기 2를 해줄것
			cnt++;
	}

	cout << cnt/2 << '\n';
	return 0;
}