#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	cin >> str;

	vector<string>vec(str.size());



	for (int i = 0; i < str.size(); i++) {
		for (int j = i; j < str.size(); j++) {
			vec[i] += str[j];
		}
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < str.size(); i++) {

		cout << vec[i] << "\n";
	}

}