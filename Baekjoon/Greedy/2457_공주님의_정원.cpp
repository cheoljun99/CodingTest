#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int S1, S2, E1, E2;
	int start = 300;// 처음 start은 실제 조건의 3월 1일 보다 작아야한다.
	int end = 301; // 처음 end는 실제 조건의 3월 1일과 같이 하여 3월 1일 이전 혹은 3월 1일 부터 꽃이 피는 것을 선택할 수 있도록 한다.
	int maxEnd = 0;

	int result = 0;

	vector<pair<int, int>>vec;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> S1 >> S2 >> E1 >> E2;

		if (S1 * 100 + S2 < 301) {
			// 3월 1일 이전에 피는 경우 계산의 편의를 위해 3월 1일로 설정한다.
			S1 = 3;
			S2 = 1;
		}

		if (E1 * 100 + E2 > 1130) {
			//11월 30일 이후에 지는 것은 계산의 편의를 위해 12월 1일로 한다. 12월 1일로 하는 이유는 11월 30일날 지는 경우 문제 조건에 의해 해당 날의 꽃은 피지않는 것이다.
			E1 = 12;
			E2 = 1;
		}
		vec.push_back({ S1 * 100 + S2,E1 * 100 + E2 });
	}
	sort(vec.begin(),vec.end()); // 첫번째 요소 즉 시작일로 정렬

	for(int i=0;i<N;i++){

		if (vec[i].first > start && vec[i].first <= end) { 
			// 정렬된 벡터의 첫번째 요소가 start보다 크고 end보다 작거나 같을 경우 즉 선택이 가능한 경우
			if (maxEnd < vec[i].second) {
				// 그리디를 적용하여 벡터의 두번째 요소 즉 꽃이 지는 날이 가장 뒤인 경우를 찾는 것으로 maxEnd값 보다 큰 경우 maxEnd값을 해당값으로 갱신한다. 
				maxEnd = vec[i].second;
			}
			if (vec[i].second == 1201) {
				// 조건에서 제시한 11월30일보다 이후에 지는 꽃을 선택한 경우 나머지 벡터 인덱스를 볼 필요가 없으므로 종료
				result++;
				end = maxEnd;
				break;
			}
		}

		else {

			if (end >= maxEnd) {
				//이부분이 이해가 잘안가네
				break;
			}

			result++;
			start = end;
			end = maxEnd;
			i--;
		}
	
	}
	if (end == 1201) {
		cout << result << endl;
	}
	else {
		cout << 0 << endl;
	}
}