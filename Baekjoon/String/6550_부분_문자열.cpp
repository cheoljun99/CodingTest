#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string a, b;
	while (cin >> a >> b) {
		int aIdx = 0;
		bool isTrue = false;
		if (b.find(a)!=b.end()) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}


	return 0;