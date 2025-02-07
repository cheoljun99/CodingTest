#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<vector<int>>vec(N,vector<int>(3,0));
	vector<vector<int>>DP(N, vector<int>(3,0));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> vec[i][j];
		}
	}
	DP[0][0] = vec[0][0];
	DP[0][1] = vec[0][1];
	DP[0][2] = vec[0][2];

	/*3가지 조건을 참고하면 1번이 빨강이면 2번이 파랑 or 초록 3번은 2번에서 한거 제외하고 1번에서 칠했던거 포함해서 골라도됨
	* N*3 짜리 DP 테이블 하나를 만들고 첫번째 집을 빨 파 초로 칠했을 때의 최소 값 0*0, 0*1, 0*2 위치에 저장해두고
	* 두번째 타일을 칠할 때는 첫번째에서 칠한 색을 제외한 두가지의 최소값을 해당하는 타일의 비용과 더해서 나온 각각의 3개의 값을 1*0, 1*1, 1*2 테이블에 저장한다.
	* 이렇게 N*3 DP 테이블을 모두 채워넣는다.
	*/
	for (int i = 1; i < N; i++) {
		DP[i][0] = min(DP[i - 1][1] + vec[i][0], DP[i - 1][2] + vec[i][0]);
		DP[i][1] = min(DP[i - 1][0] + vec[i][1], DP[i - 1][2] + vec[i][1]);
		DP[i][2] = min(DP[i - 1][0] + vec[i][2], DP[i - 1][1] + vec[i][2]);
	}
	cout << min(min(DP[N-1][0], DP[N-1][1]), DP[N-1][2]);
}