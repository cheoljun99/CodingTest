#include<bits/stdc++.h>

using namespace std;

int main() {

	int num;
	cin >> num;

	while (num--) {
		string str;
		cin >> str;
		list<char> li;
		list<char>::iterator cursor = li.begin();

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '<') {
				if (cursor == li.begin())continue;
				cursor--;
			}
			else if (str[i] == '>') {
				if (cursor == li.end())continue;
				cursor++;
			}
			else if (str[i] == '-') {
				if (cursor == li.begin())continue;
				cursor--;
				cursor = li.erase(cursor);//반환값은 삭제한 원소의 다음 원소를 가리키는 iterator를 반환
			}
			else {
				li.insert(cursor, str[i]);
			
			}
		}
		for (auto chr : li)
			cout << chr;
		cout << "\n";
	}
	
}