#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	int zeroCount = 0;
	int oneCount = 0;

	char current = 0;
	for (int i = 0; i < str.size(); i++) {
		if (i == 0)
			current = str[i];
		else {
			if (current != str[i]) {
				if (current == '0') {
					zeroCount++;
					current = str[i];
				}
				else{
					oneCount++;
					current = str[i];
				}
			}
		}
	}
	if (current == '0') {
		zeroCount++;
	}
	else {
		oneCount++;
	}
	cout << ((zeroCount <= oneCount) ? zeroCount : oneCount);
}