#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	stack<char>stackReal;
	stack<char>stackTemp;
	set<char>se;

	int result = 0;
	for (int i = 0; i < str.size(); i++) {
		if (se.find(str[i]) == se.end()) {
			se.insert(str[i]);
			stackReal.push(str[i]);
		}
		else {
			se.erase(str[i]);
			int cnt = 0;
			while (stackReal.top() != str[i]) {
				stackTemp.push(stackReal.top());
				stackReal.pop();
				cnt++;
			}
			result+=cnt;
			stackReal.pop();
			while (!stackTemp.empty()) {
				stackReal.push(stackTemp.top());
				stackTemp.pop();
			}
		}
	}

	cout << result;
}