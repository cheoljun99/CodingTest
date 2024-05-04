#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	for (int i = 1; i <= 10; i++) dq.push_back(i);

	//�ݺ��� �� ���� ���� ������ ����� �� �ݺ��� ������ �Ÿ�
	cout << dq.end() - dq.begin() << endl;// 10

	auto iter = dq.begin();
	iter += 1;
	cout << iter - dq.begin() << endl; // 1

	iter = find(dq.begin(), dq.end(), 10);
	cout << *iter << endl;//find�� 10���� ���� �ε����� ����Ű�� �ݺ��ڸ� ��ȯ�� 
	if (iter == dq.end())cout << "iter�� end�� ���ƿ�" << endl;
	iter = find(dq.begin(), dq.end(), 20);
	if (iter == dq.end())cout << "iter�� end�� ���ƿ�" << endl;
	cout << iter - dq.begin() << endl; // 10
	cout << find(dq.begin(), dq.end(), 10) - dq.begin() << endl;// 10���� ���� �ε����� ����Ű�� �ݺ��ڿ��� ������ �ݺ��ڸ� ���� �ε������� �� �� ����

	cout << "-------------------------------------------------------" << '\n';

	deque<int> dq2;
	for (int i = 1; i <= 1; i++) dq2.push_back(i);
	cout << dq2.end() - dq2.begin() << endl;//
	cout << *dq2.begin() << '\n';
	auto iter2 = dq2.begin();
	iter2 += 1;
	//cout << *iter2 << '\n';//end iterator�� �����ϴ� �� ���� ������ ���� iterator�̱� ������ ���� �������� ���� ������ ��
}