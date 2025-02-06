#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//3의 배수는 각자리 수의 합이 3의 배수인경우
	//10의 배수는 마지막 자리수가 0일때

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