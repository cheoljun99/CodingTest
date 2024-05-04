#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	for (int i = 1; i <= 10; i++) dq.push_back(i);

	//반복자 두 개를 빼면 나오는 결과는 두 반복자 사이의 거리
	cout << dq.end() - dq.begin() << endl;// 10

	auto iter = dq.begin();
	iter += 1;
	cout << iter - dq.begin() << endl; // 1

	iter = find(dq.begin(), dq.end(), 10);
	cout << *iter << endl;//find는 10값을 가진 인덱스를 가리키는 반복자를 반환함 
	if (iter == dq.end())cout << "iter가 end와 같아요" << endl;
	iter = find(dq.begin(), dq.end(), 20);
	if (iter == dq.end())cout << "iter가 end와 같아요" << endl;
	cout << iter - dq.begin() << endl; // 10
	cout << find(dq.begin(), dq.end(), 10) - dq.begin() << endl;// 10값을 가진 인덱스를 가리키는 반복자에서 시작점 반복자를 빼면 인덱스값을 알 수 있음

	cout << "-------------------------------------------------------" << '\n';

	deque<int> dq2;
	for (int i = 1; i <= 1; i++) dq2.push_back(i);
	cout << dq2.end() - dq2.begin() << endl;//
	cout << *dq2.begin() << '\n';
	auto iter2 = dq2.begin();
	iter2 += 1;
	//cout << *iter2 << '\n';//end iterator에 접근하는 건 문제 없지만 더미 iterator이기 때문에 값을 가져오는 것은 문제가 됨
}