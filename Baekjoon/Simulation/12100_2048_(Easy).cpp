#include <bits/stdc++.h>

using namespace std;

int N;
int original_board[21][21];
int copy_board[21][21];

void BoradRotate() { //copy_board�� �ð� �������� 90�� ȸ���ϴ� �Լ�
	int temp[21][21];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			temp[i][j] = copy_board[i][j];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			copy_board[i][j] = temp[N - 1 - j][i];// �׸����� �׷��� Ȯ���غ����
}

void MergeBlock(int dir) {
	while (dir--)
		BoradRotate();
	for (int i = 0; i < N; i++) {
		int merged[21] = {}; //copy_board[i]�� �������� ������ ����� ������ ����
		int idx = 0; // merged �迭���� ��� �����ؾ� �ϴ��� ����Ű�� ����
		for (int j = 0; j < N; j++) {
			if (copy_board[i][j] == 0) 
				continue;
			if (merged[idx] == 0)//������ ��ġ�� ������� ���
				merged[idx] = copy_board[i][j];
			else if (merged[idx] == copy_board[i][j])// ���� ���� ���� ����� ������ ���
				merged[idx++] *= 2;
			else //�ٸ� ���� ���� ����� ���� ���
				merged[++idx] = copy_board[i][j];
		}
		for (int j = 0; j < N; j++) copy_board[i][j] = merged[j]; // copy_board[i]�� merged�� ���
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> original_board[i][j];
	
	int ans = 0;
	for (int tmp = 0; tmp < 1024; tmp++) {
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				copy_board[i][j] = original_board[i][j];
		int brute = tmp;
		for (int i = 0; i < 5; i++) { //�ټ��� ����
			int dir = brute % 4; // �����¿� 4�� ���� ���ϱ�
			brute /= 4; // ���� ����� ����� ���� ������ ���ϱ� ����
			//������� 1�� �� 2�� �� 3�� �� 4�� �� 5�� ��+�� 6�� ��+�� 7�� ��+�� 8�� ��+�� 9�� ��+��+��....
			MergeBlock(dir); // ������ ���� ���� ����� �����ֱ�
		}
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				ans = max(ans, copy_board[i][j]);
	}
	cout << ans;
}