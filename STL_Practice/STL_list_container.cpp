#include<bits/stdc++.h>

using namespace std;

int main() {

	//STL list에서는 더미 노드가 제일 뒤에 위치
	list<char> li;
	list<char>::iterator cursor = li.begin(); //li가 비어 있을 때는 li.begin() == li.end() 즉 시작점과 끝점을 가리킴

	if (cursor == li.begin()) cout << "list가 시작점을 가리킴" << '\n';
	if (cursor == li.end()) cout << "list가 끝점을 가리킴" << '\n';

	li.insert(cursor, 'A');
	if (cursor == li.begin()) cout << "list가 시작점을 가리킴" << '\n';
	else if (cursor == li.end()) cout << "list가 끝점을 가리킴" << '\n';
	li.insert(cursor, 'B');
	if (cursor == li.begin()) cout << "list가 시작점을 가리킴" << '\n';
	else if (cursor == li.end()) cout << "list가 끝점을 가리킴" << '\n';
	li.insert(cursor, 'C');
	if (cursor == li.begin()) cout << "list가 시작점을 가리킴" << '\n';
	else if (cursor == li.end()) cout << "list가 끝점을 가리킴" << '\n';
	for (auto chr : li)
		cout << chr;
	cout << "\n";
	/* 실행 결과
	list가 시작점을 가리킴
	list가 끝점을 가리킴
	list가 끝점을 가리킴
	list가 끝점을 가리킴
	list가 끝점을 가리킴
	AB
	*/
	cout << "\n";

	list<char> li2(1,'C');
	list<char>::iterator cursor2 = li2.begin(); //li2가 비어 있지 않으므로 C를 가리킴

	if (cursor2 == li2.begin()) cout << "list가 시작점을 가리킴" << '\n';
	if (cursor2 == li2.end()) cout << "list가 끝점을 가리킴" << '\n';

	li2.insert(cursor2, 'A');
	if (cursor2 == li2.begin()) cout << "list가 시작점을 가리킴" << '\n';
	else if (cursor2 == li2.end()) cout << "list가 끝점을 가리킴" << '\n';
	li2.insert(cursor2, 'B');
	if (cursor2 == li2.begin()) cout << "list가 시작점을 가리킴" << '\n';
	else if (cursor2 == li2.end()) cout << "list가 끝점을 가리킴" << '\n';
	li2.insert(cursor2, 'C');
	if (cursor2 == li2.begin()) cout << "list가 시작점을 가리킴" << '\n';
	else if (cursor2 == li2.end()) cout << "list가 끝점을 가리킴" << '\n';
	for (auto chr : li2)
		cout << chr;
	cout << "\n";
	/* 실행 결과
	list가 시작점을 가리킴
	ABCC
	*/
	cout << "\n";

}