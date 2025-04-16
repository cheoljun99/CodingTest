#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	while (getline(cin, str)) {
		if (str == "0") {
			break;

		}
		string temp1="";
		for (int i = 0; i < str.size(); i++) {
			temp1 += str[i];
		}
		string temp2 = "";
		for (int i = str.size() - 1; i > -1; i--) {
			temp2 += str[i];
		}

		if (temp1 == temp2) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}

}