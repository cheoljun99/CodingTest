#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	while(N--){
		string str;
		cin >> str;
		cout << str[0] << str[str.size() - 1]<<'\n';
	}
	
	
	return 0;
}
