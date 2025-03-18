#include<bits/stdc++.h>

using namespace std;

// 최대공약수 구하기
int gcd(int a, int b)
{
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

// 최소공배수 구하기
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str1;
	cin >> str1;
	string str2;
	cin >> str2;

	int LCM = lcm(str1.size(), str2.size());

	string temp1 = str1;
	while (str1.size() != LCM) {
		str1 += temp1;
	}
	string temp2 = str2;
	while (str2.size() != LCM) {
		str2 += temp2;
	}

	if (str1 == str2)
		cout << 1;
	else
		cout << 0;
}