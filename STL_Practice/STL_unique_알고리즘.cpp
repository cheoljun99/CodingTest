#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> vec;

	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(2);
	vec.push_back(2);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(3);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	vec.push_back(7);

	for (auto i : vec) {
		cout << i << ' ';
	}
	cout << "\n";

	auto iter=unique(vec.begin(), vec.end());
	for (auto i : vec) {
		cout << i << ' ';
	}
	cout << "\n";

	cout << iter-vec.begin()<<'\n'; //unique가 반환하는 iter의 인덱스 값을 출력

	// unique함수는 정렬된 수열에서 중복된 값을 찾고 그 위치를 다음 크기의 수로 채워넣은 다음 끝의 빈자리에는 기존 수열의 같은 위치값으로 채운다.
	// 반환 값: 중복되지 수열을 만들고 그 이후 채워진 값들 중 가장 먼저 채워 넣은 기존 수열의 같은 위치값
	
	vector<int> vec2;

	vec2.push_back(1);
	vec2.push_back(1);
	vec2.push_back(2);
	vec2.push_back(3);
	vec2.push_back(4);
	vec2.push_back(5);
	vec2.push_back(6);
	vec2.push_back(7);

	for (auto i : vec2) {
		cout << i << ' ';
	}
	cout << "\n";

	auto iter2 = unique(vec2.begin(), vec2.end());
	for (auto i : vec2) {
		cout << i << ' ';
	}
	cout << "\n";

	cout << iter2 - vec2.begin(); //unique가 반환하는 iter의 인덱스 값을 출력
}