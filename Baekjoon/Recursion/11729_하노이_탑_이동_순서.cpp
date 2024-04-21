#include <bits/stdc++.h>

using namespace std;

void hanoi(int a, int b, int n) {
	if(n == 1) {
		cout << a << " " << b << '\n';// base condition
		return;
	}
	hanoi(a, 6 - a - b, n - 1);// n-1���� ��ǥ b�� �ƴ� c�� �̵� �̶� c=6-a-b��
	cout << a << " " << b << '\n';//������ ���� �ؿ� �ִ� ���� ���� ū�Ÿ� ��ǥ b�� �̵�
	hanoi(6 - a - b,b,n-1); // c�� �Ű�� n-1�� �ٽ� ��ǥ b�� �̵�
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	cin >> k;
	cout << (1 << k) - 1 << '\n';// 1<<1�� 2�� 1���̹Ƿ� 1<<k�� 2�� k��
	hanoi(1, 3, k);


}