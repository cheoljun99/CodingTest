#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<int>vec;

	for (int i = 1; i <=N; i++) {
		int num;
		cin >> num;
		vec.insert(vec.begin() + num, i);
	}

	for (int i = N-1; i >-1; i--) {
		cout << vec[i]<<' ';
	}

}