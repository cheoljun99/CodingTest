#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int>distance(N - 1);
	for (int i = 0; i < N - 1; i++) {
		cin >> distance[i];
	}
	vector<int>oilPrice(N);
	long long currentOilPrice = 0;
	for (int i = 0; i < N; i++) {
		cin >> oilPrice[i];
	}
	currentOilPrice = oilPrice[0];

	long long res = 0;
	for (int i = 0; i < N - 1; i++) {
		res += (currentOilPrice * distance[i]);
		if (currentOilPrice > oilPrice[i + 1])
			currentOilPrice = oilPrice[i + 1];
	}
	cout << res;
}