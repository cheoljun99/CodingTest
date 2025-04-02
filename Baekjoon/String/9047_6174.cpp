#include<bits/stdc++.h>

using namespace std;

int recursive(string str, int deep) {
	if (str == "6174") {
		return deep;
	}
	sort(str.begin(), str.end(), greater<char>());
	string big = str;
	sort(str.begin(), str.end(), less<char>());
	string small = str;
	int temp = stoi(big) - stoi(small);
	string strTemp = to_string(temp);
	while (strTemp.length() != 4) strTemp = "0" + strTemp;
	return recursive(strTemp, deep + 1);

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;
		int result = recursive(str, 0);
		cout << result<<'\n';
	}
}