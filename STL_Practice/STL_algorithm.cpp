#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;

	cin >> N;
	deque<int> dq;
	for (int i = 1; i <= N; i++) dq.push_back(i);

	//�ݺ��� �� ���� ���� ������ ����� �� �ݺ��� ������ �Ÿ�(�ε���)
	cout << dq.end() - dq.begin() << endl;

	auto iter = dq.begin();
	iter += 1;
	cout << iter - dq.begin() << endl;

	cout << *find(dq.begin(), dq.end(), 10) << endl;//find�� 10���� ���� �ε����� ����Ű�� �ݺ��ڸ� ��ȯ�� 
	cout << find(dq.begin(), dq.end(), 10) - dq.begin() << endl;// 10���� ���� �ε����� ����Ű�� �ݺ��ڿ��� ������ �ݺ��ڸ� ���� �ε������� �� �� ����
}