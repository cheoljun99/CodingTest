#include <bits/stdc++.h>

using namespace std;

void hanoi(int a, int b, int n) {
	if(n == 1) {
		cout << a << " " << b << '\n';// base condition
		return;
	}
	hanoi(a, 6 - a - b, n - 1);// n-1개를 목표 b가 아닌 c로 이동 이때 c=6-a-b임
	cout << a << " " << b << '\n';//나머지 가장 밑에 있는 원판 가장 큰거를 목표 b로 이동
	hanoi(6 - a - b,b,n-1); // c로 옮겼던 n-1를 다시 목표 b로 이동
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	cin >> k;
	cout << (1 << k) - 1 << '\n';// 1<<1이 2에 1승이므로 1<<k는 2의 k승
	hanoi(1, 3, k);


}