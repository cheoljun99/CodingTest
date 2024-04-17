#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {

	string input_str = "";
	int input_num = 0;

	cin >> input_str;
	cin >> input_num;

	list<char>L;

	for (auto chr : input_str) L.push_back(chr);
	auto cursor = L.end();

	while (input_num--) {
		char op;
		cin >> op;
		if (op == 'P') {
			char add_chr;
			cin >> add_chr;
			L.insert(cursor, add_chr);
		}
		else if (op == 'L') {
			if (cursor != L.begin()) {
				cursor--;
			}
		}
		else if (op == 'D') {
			if (cursor != L.end()) {
				cursor++;
			}
		}
		else if (op == 'B') {
			if (cursor != L.begin()) {
				cursor--;
				cursor=L.erase(cursor);
			}
		}
	}

	for (auto chr : L)
		cout << chr;

}