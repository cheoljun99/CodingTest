#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;

	stack<char>stackBeginS;
	stack<char>stackBeginL;
	string str;

	cin >> str;

	int cnt = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'S') {
			stackBeginS.push(str[i]);
		}
		else if (str[i] == 'L') {
			stackBeginL.push(str[i]);
		}
		else if (str[i] == 'K') {
			if (!stackBeginS.empty()) {
				cnt++;
				stackBeginS.pop();
			}
			else{
				break;
			}

		}
		else if (str[i] == 'R') {
			if (!stackBeginL.empty()) {
				cnt++;
				stackBeginL.pop();
			}
			else {
				break;
			}

		}
		else {
			cnt++;
		}
	}
	cout << cnt;

}