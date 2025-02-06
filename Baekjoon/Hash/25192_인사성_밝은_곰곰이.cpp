#include<bits/stdc++.h>
#include <unordered_map>


using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	unordered_map<string, int>um;

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "ENTER") {
			um.clear();
		}
		else {
			auto iter = um.find(str);
			if (iter == um.end()) {
				um.insert({ str, 1 });
				cnt++;
			}
		}
		
	}
	cout << cnt;

}