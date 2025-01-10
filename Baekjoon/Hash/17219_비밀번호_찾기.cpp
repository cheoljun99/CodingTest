#include<bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int N, M;

	cin >> N >> M;

	map<string, string>m;


	while (N--) {

		string str1;
		string str2;

		cin >> str1 >> str2;
		m.insert({ str1,str2 });

	}
	while (M--) {
		string str3;
		cin >> str3;

		cout << m[str3] << '\n';

	}


}