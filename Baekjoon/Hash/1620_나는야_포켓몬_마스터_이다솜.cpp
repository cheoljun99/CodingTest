#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	unordered_map<string, int> um1;
	unordered_map<int, string> um2;
	for (int i = 1; i <= N; i++) {
		string str;
		cin >> str;
		um1.insert({ str,i });
		um2.insert({ i,str });
	}

	for (int i = 1; i <= M; i++) {
		string str;
		cin >> str;
		if (str[0] >= 65 && str[0] <= 90) {
			cout << um1[str] << '\n';
		}
		else {
			int num = stoi(str);
			cout << um2[num] << '\n';
		}

	}
}