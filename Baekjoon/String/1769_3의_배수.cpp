#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string X;
	cin >> X;

	int count = 0;
	while (X.size() != 1) {
		int temp = 0;
		for (int i = 0; i < X.size(); i++) {
			string strTemp = "";
			strTemp = X[i];
			temp += stoi(strTemp);
		}
		X = to_string(temp);
		count++;
	}
	cout << count << '\n';
	if (stoi(X) % 3 == 0)
		cout << "YES";
	else
		cout << "NO";


}