#include<bits/stdc++.h>

using namespace std;

int arr[301];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int>vec(N+1, 0);
	for (int i = 1; i <=N; i++) {
		cin >> vec[i];
	}
	arr[1] = vec[1];
	arr[2] = vec[1] + vec[2];
	arr[3] = max(vec[1] + vec[3], vec[2] + vec[3]);

	//Á¡È­½Ä arr[N] = max(arr[N-2]+vec[N],arr[N-3]+vec[N-1]+vec[N])

	for (int i = 4; i <= N; i++) {
		arr[i] = max(arr[i - 2] + vec[i], arr[i - 3] + vec[i - 1] + vec[i]);
	}
	cout << arr[N];

}