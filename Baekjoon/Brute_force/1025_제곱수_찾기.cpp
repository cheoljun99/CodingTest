#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;


int N,M;
int answer = -1;
int table[9][9];

int is_square(int num) {
	//������ �Ǵ� �� ��ȯ

	int root = (int)sqrt(num);
	if (root * root == num) return num;
	else return -1;
}

int main() {

	cin >> N >> M;
	string input = "";

	for (int i = 0; i < N; i++) {
		cin >> input;
		for (int j = 0; j < M; j++) {
			table[i][j] = input[j] - '0';

		}
	}
	//table[i][j]�� ���������� �������̶�� ����
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			//���� ������, ���� ������ ���ϴµ�, -�� ��쵵 ���ؾ� �Ѵ�.
			for (int common_difference_N = -N ; common_difference_N < N; common_difference_N++) {
				for (int common_difference_M = -M ; common_difference_M < M; common_difference_M++) {
					if (common_difference_N == 0 && common_difference_M == 0) //��� ���� ������ ��� 0�̸� ���ѷ����� �����Ƿ� �̸� ����
						continue;
					int a = i;
					int b = j;
					int num = 0;
					while (a >= 0 && a < N && b >= 0 && b < M) {//�ش� ��� ���� �������� ������ ������ ��� ���� �˻�
						num *= 10;
						num += table[a][b];
						answer = max(answer, is_square(num));
						a += common_difference_N;
						b += common_difference_M;
					}
				}
			}
		}
	}
	cout << answer;
}