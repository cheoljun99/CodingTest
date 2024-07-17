#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[6];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 2;
	arr[4] = 2;
	arr[5] = 8;

	int brr[6];
	cin >> brr[0] >> brr[1] >> brr[2] >> brr[3] >> brr[4] >> brr[5];
	cout<< arr[0] - brr[0]<<" " << arr[1] - brr[1] << " " << arr[2] - brr[2] << " " << arr[3] - brr[3] << " " << arr[4] - brr[4] << " " << arr[5] - brr[5];



}
