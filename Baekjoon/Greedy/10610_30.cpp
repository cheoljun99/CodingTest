#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//3�� ����� ���ڸ� ���� ���� 3�� ����ΰ��
	//10�� ����� ������ �ڸ����� 0�϶�

	string str;
	cin >> str;

	sort(str.begin(), str.end(), greater<char>());

	int check = 0;
	for (int i = 0; i < str.size() - 1; i++) {
		check += (str[i] - '0');
	}
	if (check % 3 != 0) {
		cout << -1;
		return 0;
	}
	if (str[str.size() - 1] != '0') {
		cout << -1;
		return 0;
	}
	cout << str;

}