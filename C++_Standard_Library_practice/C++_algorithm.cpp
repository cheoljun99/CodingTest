#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;

	cin >> N;
	deque<int> dq;
	for (int i = 1; i <= N; i++) dq.push_back(i);

	//반복자 두 개를 빼면 나오는 결과는 두 반복자 사이의 거리(인덱스)
	cout << dq.end() - dq.begin() << endl;

	auto iter = dq.begin();
	iter += 1;
	cout << iter - dq.begin() << endl;

	cout << *find(dq.begin(), dq.end(), 10) << endl;//find는 10값을 가진 인덱스를 가리키는 반복자를 반환함 
	cout << find(dq.begin(), dq.end(), 10) - dq.begin() << endl;// 10값을 가진 인덱스를 가리키는 반복자에서 시작점 반복자를 빼면 인덱스값을 알 수 있음
}