#include<bits/stdc++.h>

using namespace std;

bool check[2000001];// �μ��� ���� ���Ҷ� ���꿡 ���Ǵ� ���ڸ� �����ϱ� ���� �迭 (����� �� �߿��� x�� 2000000�̰� ai�� 1�� ��� ���̰� 1999999�ε� �ش� ������ üũ�ؾ��ϹǷ� 2000001ũ��� ����)

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
		if (x - vec[i] > 0 && check[x - vec[i]] == true) // x�� �̷�� �μ��� ã�� ���� �� ���� ���ڸ� 2���� Ž���ϹǷ� �������� ������ 2�� ���ٰ�
			cnt++;
	}

	cout << cnt/2 << '\n';
	return 0;
}