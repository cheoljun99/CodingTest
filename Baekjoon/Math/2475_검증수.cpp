#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[5];

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	int sum = 0;
	sum = arr[0] * arr[0] + arr[1] * arr[1] + arr[2] * arr[2] + arr[3] * arr[3] + arr[4] * arr[4];
	cout << sum % 10;
	

}