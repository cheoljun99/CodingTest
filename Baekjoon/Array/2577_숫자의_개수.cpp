#include<bits/stdc++.h>

using namespace std;

int t[10];


int main() {

	int A, B,C;
	cin >> A >> B >> C;

	int mul = A * B * C;

	string str = to_string(mul);

	for (int i = 0; i < str.size(); i++) {
		t[str[i] - '0']++;
	}
	for (int i = 0; i < 10; i++) {
		cout << t[i] << '\n';
	}
	
}