#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;


	map<string, int>m;
	for (int i = 0; i < num; i++) {
		string str;
		cin >> str;

		if (str.find("Cheese",str.size() - 6) != string::npos) {
			if (m.find(str) == m.end()) {
				m.insert({str, 1});
			}
		}

	}
	if (m.size() >= 4)
		cout << "yummy";
	else
		cout << "sad";

}