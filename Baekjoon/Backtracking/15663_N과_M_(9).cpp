#include <bits/stdc++.h>

using namespace std;
int N, M;

int arr_main[8];// 주 수열
int arr_ans[8]; // 정답 수열
int arr_used[8];// 백트래킹을 위한 방문한 값 저장

void backtracking(int depth) {
	if (depth == M) {
		for (int i = 0; i < M; i++) {
			cout << arr_ans[i] << " ";
		}
		cout << '\n';
		return;
	}
	int tmp = 0;  // 중복 수열인지 확인 하기 위해 필요한 임시 변수
	for (int i = 0; i < N; i++) {
		if (!arr_used[i] && tmp != arr_main[i]) {
			// 이전 수열의 마지막 항과 새로운 수열의 마지막으로 들어갈 항이 같으면 중복 수열인데
			// 이것이 가능한 이유는 입력받은 수열을 정렬하고 재귀로 탐색하는데 이전 수열이 정답을 도출하고 호출한 재귀를
			// 반환하고 다음 수열을 정하러 다시 for문의 재귀함수를 실행할 건데 이때 정답으로 출력한 수열의 마지막을 알고 있으면
			// 다음으로 구성할 수열에 마지막으로 들어갈 항과 비교가 가능하다.
			// 예를 들어 9 7 9 1에서 9 9 수열을 출력하는 경우는
			// 가장 처음 정답 수열에 9를 이루고 재귀 함수를 호출하고 그 다음 정답 수열 9를 추가하는 동안 예외가 발생하지 않지만
			// 1 9 수열의 경우 두가지 경우가 있는데 첫번째 경우를 먼저 출력하면 tmp에 9가 저장되고 재귀로 호출된 함수가 종료된다. 이후 for문의
			// 다음 과정으로 9가 또 들어올건데 이때 정답 수열은 다시 1만 들어가 있는 상태에서 tmp가 9로 저장되어있기 때문에 예외처리가 발생해서 정답 수열에 9를 넣지 않는다. 
			arr_used[i] = true;
			arr_ans[depth] = arr_main[i];
			tmp = arr_ans[depth];
			backtracking(depth + 1);
			arr_used[i] = false;
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++)cin >> arr_main[i];
	sort(arr_main, arr_main + N);

	backtracking(0);

}