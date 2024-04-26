#include <iostream>
#include <map>

using namespace std;

int main() {
	///////////////////////////////////////////////////////////////////////
	map<int, int> m1;
	for (int i = 0; i < 10; i++) {
		m1.insert({ i,0 });
	}

	for (auto i : m1) {
		cout << "key : " << i.first <<" " << "value : " << i.second << endl;
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		m1[i]++;
	}

	for (auto i : m1) {
		cout << "key : " << i.first << " " << "value : " << i.second << endl;
	}
	cout << endl;

	map<int, int>::iterator iter;
	for (iter = m1.begin(); iter != m1.end(); iter++) {
		cout << "iter로 접근한 key : " << iter->first << " " << "value : " << iter->second << endl;
	}
	cout << endl;

	//////////////////////////////////////////////////////////////////////////////////////////
	map<int, int>m2;
	if (m2.size() == 0) {
		cout << "m2의 사이즈는 0입니다."<<endl;
	}
	else {
		for (auto i : m2) {
			cout << "key : " << i.first << " " << "value : " << i.second << endl;
		}

	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		if (m2[i] == 0) cout << "m2에 " << i << "를 가지는 key가 생성되는데 이는 잘못된 방식입니다." << endl;
	}
	cout << endl;
	if (m2.size() == 0) {
		cout << "m2의 사이즈는 0입니다." << endl;
	}
	else {
		for (auto i : m2) {
			cout << "key : " << i.first << " " << "value : " << i.second << endl;
		}

	}
	cout << endl;
	//////////////////////////////////////////////////////////////////////////////////////////
	map<int, int>m3;
	if (m3.size() == 0) {
		cout << "m3의 사이즈는 0입니다." << endl;
	}
	else {
		for (auto i : m3) {
			cout << "key : " << i.first << " " << "value : " << i.second << endl;
		}

	}
	cout << endl;
	
	for (int i = 0; i < 10; i++) {
		auto it = m3.find(i);
		if (it == m3.end()) cout << "m3에 " << i << "를 가지는 key가 생성되지 않습니다." << endl;
	}
	cout << endl;
	if (m3.size() == 0) {
		cout << "m3의 사이즈는 0입니다." << endl;
	}
	else {
		for (auto i : m3) {
			cout << "key : " << i.first << " " << "value : " << i.second << endl;
		}

	}
	cout << endl;

	////////////////////////////////////////////////////////////////////////////////////////
}