#include<bits/stdc++.h>

using namespace std;

int main() {

	//STL list������ ���� ��尡 ���� �ڿ� ��ġ
	list<char> li;
	list<char>::iterator cursor = li.begin(); //li�� ��� ���� ���� li.begin() == li.end() �� �������� ������ ����Ŵ

	if (cursor == li.begin()) cout << "list�� �������� ����Ŵ" << '\n';
	if (cursor == li.end()) cout << "list�� ������ ����Ŵ" << '\n';

	li.insert(cursor, 'A');
	if (cursor == li.begin()) cout << "list�� �������� ����Ŵ" << '\n';
	else if (cursor == li.end()) cout << "list�� ������ ����Ŵ" << '\n';
	li.insert(cursor, 'B');
	if (cursor == li.begin()) cout << "list�� �������� ����Ŵ" << '\n';
	else if (cursor == li.end()) cout << "list�� ������ ����Ŵ" << '\n';
	li.insert(cursor, 'C');
	if (cursor == li.begin()) cout << "list�� �������� ����Ŵ" << '\n';
	else if (cursor == li.end()) cout << "list�� ������ ����Ŵ" << '\n';
	for (auto chr : li)
		cout << chr;
	cout << "\n";
	/* ���� ���
	list�� �������� ����Ŵ
	list�� ������ ����Ŵ
	list�� ������ ����Ŵ
	list�� ������ ����Ŵ
	list�� ������ ����Ŵ
	AB
	*/
	cout << "\n";

	list<char> li2(1,'C');
	list<char>::iterator cursor2 = li2.begin(); //li2�� ��� ���� �����Ƿ� C�� ����Ŵ

	if (cursor2 == li2.begin()) cout << "list�� �������� ����Ŵ" << '\n';
	if (cursor2 == li2.end()) cout << "list�� ������ ����Ŵ" << '\n';

	li2.insert(cursor2, 'A');
	if (cursor2 == li2.begin()) cout << "list�� �������� ����Ŵ" << '\n';
	else if (cursor2 == li2.end()) cout << "list�� ������ ����Ŵ" << '\n';
	li2.insert(cursor2, 'B');
	if (cursor2 == li2.begin()) cout << "list�� �������� ����Ŵ" << '\n';
	else if (cursor2 == li2.end()) cout << "list�� ������ ����Ŵ" << '\n';
	li2.insert(cursor2, 'C');
	if (cursor2 == li2.begin()) cout << "list�� �������� ����Ŵ" << '\n';
	else if (cursor2 == li2.end()) cout << "list�� ������ ����Ŵ" << '\n';
	for (auto chr : li2)
		cout << chr;
	cout << "\n";
	/* ���� ���
	list�� �������� ����Ŵ
	ABCC
	*/
	cout << "\n";

}