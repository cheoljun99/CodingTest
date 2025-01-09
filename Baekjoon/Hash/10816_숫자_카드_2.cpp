#include<bits/stdc++.h>

using namespace std;

int main()
{

	std::ios::sync_with_stdio(false); 
	std::cin.tie(NULL);
	int N;
	cin >> N;

	map<int, int> m;


	while (N--) {
		int num;
		cin >> num;
		m[num]++;
	}

	int M;
	cin >> M;
	while (M--) {
		int num2;
		cin >> num2;
		auto iter2 = m.find(num2);
		if (iter2 == m.end()) {
			cout << 0 << ' ';
		}
		else {
			cout << m[num2] << ' ';
			//cout << iter2->second << ' ';
		}
	}

}