#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	while(1){
		stack<char>st;
		string input_string = "";
		getline(cin,input_string);
		bool check = 0;
		
		if (input_string == ".") {
			return 0;
		}
		
		for (int i = 0; input_string[i] != '.'; i++) {
			if (input_string[i] == '(' || input_string[i] == '[') {
				st.push(input_string[i]);
			}
			else if (input_string[i] == ')') {
				if (st.empty()) {
					check=1;
					cout << "no" << "\n";
					break;
				}
				if (st.top() == '(') {
					st.pop();
				}
				else {
					check = 1;
					cout << "no" << "\n";
					break;
				}
			}
			else if (input_string[i] == ']') {
				if (st.empty()) {
					check=1;
					cout << "no" << "\n";
					break;
				}
				if (st.top() == '[') {
					st.pop();
				}
				else {
					check=1;
					cout << "no" << "\n";
					break;
				}
			}
		}

		if (check != 0) {
			continue;
		}
		else {
			if (st.empty()) {
				cout << "yes" << "\n";
			}
			else {
				cout << "no" << "\n";
			}
		}
	}
}