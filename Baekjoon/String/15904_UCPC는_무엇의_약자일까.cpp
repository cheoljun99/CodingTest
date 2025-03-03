#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string input;
	getline(cin, input);
	vector<char>vec(4);
	vec[0] = 'U';
	vec[1] = 'C';
	vec[2] = 'P';
	vec[3] = 'C';


	int cnt = 0;
	for (int i = 0; i < input.size(); i++) {

		if (cnt > 3) {
			break;
		}
		if (input[i] == vec[cnt]) {
			cnt++;
		}
	}
	if (cnt > 3) {
		cout << "I love UCPC" << '\n';
	}
	else {
		cout << "I hate UCPC" << '\n';
	}
}