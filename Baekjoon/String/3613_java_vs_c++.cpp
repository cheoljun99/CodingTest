#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;
	if (isupper(str[0])) {
		cout << "Error!";
		return 0;
	}
	if (str[str.size() - 1] == '_'|| str[0] == '_') {
		cout << "Error!";
		return 0;
	}

	string tmp = "";
	bool java = 0;
	bool cpp = 0;
	for (int i = 0; i < str.size(); i++) {
		if (isupper(str[i])) {
			tmp += '_';
			tmp += tolower(str[i]);
			java = 1;
		}
		else if (str[i] == '_') {
			if (isupper(str[i + 1])) {
				cout << "Error!";
				return 0;
			}
			if (str[i + 1] == '_') {
				cout << "Error!";
				return 0;
			}
			tmp += toupper(str[i + 1]);
			i += 1;
			cpp = 1;
		}
		else {
			tmp += str[i];
		}
	}
	if (java && cpp) {
		cout << "Error!";
		return 0;
	}
	cout << tmp;
}