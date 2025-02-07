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

	/*3���� ������ �����ϸ� 1���� �����̸� 2���� �Ķ� or �ʷ� 3���� 2������ �Ѱ� �����ϰ� 1������ ĥ�ߴ��� �����ؼ� ��󵵵�
	* N*3 ¥�� DP ���̺� �ϳ��� ����� ù��° ���� �� �� �ʷ� ĥ���� ���� �ּ� �� 0*0, 0*1, 0*2 ��ġ�� �����صΰ�
	* �ι�° Ÿ���� ĥ�� ���� ù��°���� ĥ�� ���� ������ �ΰ����� �ּҰ��� �ش��ϴ� Ÿ���� ���� ���ؼ� ���� ������ 3���� ���� 1*0, 1*1, 1*2 ���̺� �����Ѵ�.
	* �̷��� N*3 DP ���̺��� ��� ä���ִ´�.
	*/
	for (int i = 1; i < N; i++) {
		DP[i][0] = min(DP[i - 1][1] + vec[i][0], DP[i - 1][2] + vec[i][0]);
		DP[i][1] = min(DP[i - 1][0] + vec[i][1], DP[i - 1][2] + vec[i][1]);
		DP[i][2] = min(DP[i - 1][0] + vec[i][2], DP[i - 1][1] + vec[i][2]);
	}
	cout << min(min(DP[N-1][0], DP[N-1][1]), DP[N-1][2]);
}