#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int money[8] = { 50000,10000,5000,1000,500,100,50,10 };

	int T;
	cin >> T;

	for(int i=1;i<=T;i++){
		int price;
		cin >> price;
		cout << "#" << i << '\n';
		for (int i = 0; i < 8; i++) {
			int quotient = 0;
			quotient = price / money[i];
			price=price%money[i];
			cout << quotient << " ";
		}
		cout << '\n';
	}
}