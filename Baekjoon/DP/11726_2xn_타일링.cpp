#include<bits/stdc++.h>

using namespace std;

int arr[1001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int n;
	cin >> n;
	
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 5;
	//Á¡È­½Ä arr[n] = arr[n-1]+arr[n-2]

	for (int i = 5; i <= 1000; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 10007;
	}

	cout << arr[n];

}