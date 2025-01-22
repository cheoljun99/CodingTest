#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;

	cin >> N >> M;

	queue<int> * q = new queue<int>[200001];
	vector<int> vec(N,0);


	for (int i = 0; i < N; i++) {
		int k;
		cin >> k;
		for (int j = 0; j<k; j++) {
			int A;
			cin >> A;
			q[A].push(i);
		}
	}

	for (int i = 0; i < M; i++) {

		int B;
		cin >> B;

		if (!q[B].empty()) { // ť�� ������� ���� ���
			int current = q[B].front(); // ť�� ù ��° ��� ��������
			vec[current]++; // �ش� ����� �ʹ� ī��Ʈ ����
			q[B].pop(); // ť���� �ϳ��� ����
		}

	}

	for (auto i : vec) {
		cout << i << " ";
	}

}