#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;
	map<int, int>m;

	while (A--) {
		int num1;
		cin >> num1;
		m.insert({ num1,0});
	}
	while (B--) {
		int num2;
		cin >> num2;
		auto iter = m.find(num2);
		if (iter != m.end())
			m[num2] = 1;
		else
			m.insert({ num2,0 });
	}
	int cnt = 0;
	for (auto i : m) {
		if (i.second == 0)
			cnt++;
	}
	cout << cnt;
}