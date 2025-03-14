#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	for (int i = 0; i < str.size();) {
		if (str[i] == 'p' && str[i + 1] == 'i')
			i = i + 2;
		else if (str[i] == 'k' && str[i + 1] == 'a')
			i = i + 2;
		else if (str[i] == 'c' && str[i + 1] == 'h' && str[i + 2] == 'u')
			i = i + 3;
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}