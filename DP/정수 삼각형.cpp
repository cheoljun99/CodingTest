#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


/*�ٴڱ��� �̾����� ��θ� ���� ������ ���� ���� ū ��츦 ã�ƾ� ������ ��� ��츦 ���ؾ��Ѵ�. �̶� dfs�� bfs�� ���÷����� �ѹ������� Ž���ϴ� ���� ���� �ٸ� �������� Ž���ϴ� �� ���� dp �޸������̼��� ����Ͽ� �ﰢ�� �迭�� �Ȱ��� dp �迭�� �����Ͽ� ������ ���� ���� dp�迭�� ������ �����°� �� ������ ȿ�����̶� �����߱� ������ dp�� �� ������ �Ͱ��Ҵ�.

dp ���̺� �����Ҷ� ����� ���� 1. ���� ���ʿ� �ִ� ��� �ٷ� ���� ���ʰ��� �ش� ��ġ���� ���ϴ� ���, 2. ���� �����ʿ� �ִ� ��� �ٷ� ���� ������ ���� �ش� ��ġ���� ���ϴ� ���, 3. �׹ۿ� ��� �ٷ� ���� dp�� �����(�׵��� ���� ��)�� �� ���� ū �Ͱ� �ش� ��ġ���� ���ϴ� ���
*/
int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int n = triangle.size();
    vector<vector<int>>dp(n, vector<int>(n, 0));

    dp[0][0] = triangle[0][0];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                dp[i][0] = dp[i - 1][0] + triangle[i][j];

            }
            else if (j == i) {
                dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
            }
            else {
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (dp[n - 1][i] > answer) {
            answer = dp[n - 1][i];
        }
    }
    return answer;
}