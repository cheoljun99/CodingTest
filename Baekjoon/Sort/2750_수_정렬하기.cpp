#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> vec;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end(), less<int>());
	for (int i = 0; i < N; i++)
		cout << vec[i] << '\n';
}
