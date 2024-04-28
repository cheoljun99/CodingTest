#include<bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	stack<char>st;

	int total = 0; // 누적해서 더해질 값 
	int num = 0;// 쇠막대기 합

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			num += 1;
			st.push(str[i]);
		}
		else{ //str[i] == ')'
			if (str[i - 1] == '(') {
				total += num - 1;
				st.pop();
				num -= 1;
			}
			else {//쇠막대기의 끝을 만났을 때 그때의 쇠막대기의 마지막 한부분이 남아있으므로
				total += 1;
				st.pop();
				num -= 1;
			}
		}
	}
	cout << total;
	
}