#include <iostream>

#include <algorithm>



using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[3] = { 1,2,3 };
	do {
		for (int i = 0; i < 3; i++) {
			cout << a[i];
		}
		cout << '\n';
	} while (next_permutation(a, a + 3)); //사전 순서로 수열을 생성하는데 마지막 순서여서 다음 수열이 존재하지 않는다면 false를 출력하므로 do while문으로 실행한다.
	/*
	123
	132
	213
	131
	312
	321
	*/
	cout << '\n'<<'\n';
	int b[3] = { 1,1,2 };
	do {
		for (int i = 0; i < 3; i++) {
			cout << b[i];
		}
		cout << '\n';
	} while (next_permutation(b, b + 3)); //사전 순서로 수열을 생성하는데 마지막 순서여서 다음 수열이 존재하지 않는다면 false를 출력하므로 do while문으로 실행한다.
	//next_permutation함수의 인자값은 시작 주소(iterator)와 끝주소
	/*
	112
	121
	211
	*/
	cout << '\n' << '\n';
	//아래는 조합의 경우

	//4C2의 경우
	int c_main[4] = {1,2,3,4}; // 보조 수열
	int c_sub[4] = {0,0,1,1}; // 보조 수열
	do {
		for (int i = 0; i < 4; i++) {
			if (c_sub[i] == 0)
				cout << c_main[i]<<' ';
		}
		cout << '\n';
		for (int i = 0; i < 4; i++) {
			cout << c_sub[i] << ' ';
		}
		cout << '\n';

	} while (next_permutation(c_sub, c_sub + 4));
	cout << '\n' << '\n';
	/*
	1 2
	1 3
	1 4
	2 3
	2 4
	3 4
	*/
	//4C2의 경우
	int d_main[5] = { 1,2,3,4,5}; // 보조 수열
	int d_sub[5] = { 0,0,0,1,1 }; // 보조 수열
	do {
		for (int i = 0; i < 5; i++) {
			if (d_sub[i] == 0)
				cout << d_main[i] << ' ';
		}
		cout << '\n';
		for (int i = 0; i < 5; i++) {
			cout << d_sub[i] << ' ';
		}
		cout << '\n';
	} while (next_permutation(d_sub, d_sub + 5));

	/*
	1 2 3
	1 2 4
	1 2 5
	1 3 4
	1 3 5
	1 4 5
	2 3 4
	2 3 5
	2 4 5
	3 4 5
	*/

}