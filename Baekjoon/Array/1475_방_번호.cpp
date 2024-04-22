#include<bits/stdc++.h>

using namespace std;

int t[10];

int main() {

	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		t[str[i] - '0']++;
	}
	int cnt1=0, cnt2=0;
	for (int i = 0; i < 10; i++) {
		if (i != 6 && i != 9&& cnt1<t[i]) {
			cnt1=t[i];
		}
		else if(i == 6 ||i == 9) {
			cnt2 += t[i];
		}
	}
	cnt2 = cnt2 / 2 + cnt2 % 2;
	if (cnt2 > cnt1) {
		cout << cnt2 << endl;
	}
	else {
		cout << cnt1 << endl;
	}

}