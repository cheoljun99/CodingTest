#include<bits/stdc++.h>

using namespace std;
// 함수문자열를 스택에 저장하고 g나 f를 발견할 시 스택에서 빼서 사용하는 방식
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	string str;

	cin >> str;

	stack<int> functionStack;
	
	for (int i = str.size() - 1; i >= 0; i--) {
		if (str[i] == 'x') {
			functionStack.push(0);
		}
		else if (str[i] == 'g') {
			if (functionStack.empty()) {
				cout << -1;
				return 0;
			}
			else {
				int temp = functionStack.top();
				functionStack.pop();
				temp += 1;
				functionStack.push(temp);
			}
		}
		else if (str[i] == 'f') {
			if (functionStack.empty()) {
				cout << -1;
				return 0;
			}
			else {
				int firstComponent = functionStack.top();
				functionStack.pop();
				if (functionStack.empty()) {
					cout << -1;
					return 0;
				}
				else {
					int secondComponent = functionStack.top();
					functionStack.pop();
					if (firstComponent > secondComponent) {
						functionStack.push(secondComponent);
					}
					else {
						functionStack.push(firstComponent);
					}
				}
			}
		}
	}
	if (functionStack.size() != 1) {
		cout << -1;
		return 0;
	}
	else {
		cout << functionStack.top();
	}
}