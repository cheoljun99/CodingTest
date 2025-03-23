#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string A, B, C, D;
	cin >> A >> B >> C >> D;
	string temp1 = A + B;
	string temp2 = C + D;
	long long result = stoll(temp1) + stoll(temp2);
	cout << result;
}