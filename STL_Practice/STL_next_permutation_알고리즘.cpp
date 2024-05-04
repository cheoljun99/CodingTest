#include <iostream>

#include <algorithm>



using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[3] = { 1,2,3 };
	do {
		for (int i = 0; i < 3; i++) {
			cout << a[i];
		}
		cout << '\n';
	} while (next_permutation(a, a + 3)); //���� ������ ������ �����ϴµ� ������ �������� ���� ������ �������� �ʴ´ٸ� false�� ����ϹǷ� do while������ �����Ѵ�.
	/*
	123
	132
	213
	131
	312
	321
	*/
	cout << '\n'<<'\n';
	int b[3] = { 1,1,2 };
	do {
		for (int i = 0; i < 3; i++) {
			cout << b[i];
		}
		cout << '\n';
	} while (next_permutation(b, b + 3)); //���� ������ ������ �����ϴµ� ������ �������� ���� ������ �������� �ʴ´ٸ� false�� ����ϹǷ� do while������ �����Ѵ�.
	//next_permutation�Լ��� ���ڰ��� ���� �ּ�(iterator)�� ���ּ�
	/*
	112
	121
	211
	*/
	cout << '\n' << '\n';
	//�Ʒ��� ������ ���

	//4C2�� ���
	int c_main[4] = {1,2,3,4}; // ���� ����
	int c_sub[4] = {0,0,1,1}; // ���� ����
	do {
		for (int i = 0; i < 4; i++) {
			if (c_sub[i] == 0)
				cout << c_main[i]<<' ';
		}
		cout << '\n';
		for (int i = 0; i < 4; i++) {
			cout << c_sub[i] << ' ';
		}
		cout << '\n';

	} while (next_permutation(c_sub, c_sub + 4));
	cout << '\n' << '\n';
	/*
	1 2
	1 3
	1 4
	2 3
	2 4
	3 4
	*/
	//4C2�� ���
	int d_main[5] = { 1,2,3,4,5}; // ���� ����
	int d_sub[5] = { 0,0,0,1,1 }; // ���� ����
	do {
		for (int i = 0; i < 5; i++) {
			if (d_sub[i] == 0)
				cout << d_main[i] << ' ';
		}
		cout << '\n';
		for (int i = 0; i < 5; i++) {
			cout << d_sub[i] << ' ';
		}
		cout << '\n';
	} while (next_permutation(d_sub, d_sub + 5));

	/*
	1 2 3
	1 2 4
	1 2 5
	1 3 4
	1 3 5
	1 4 5
	2 3 4
	2 3 5
	2 4 5
	3 4 5
	*/

}