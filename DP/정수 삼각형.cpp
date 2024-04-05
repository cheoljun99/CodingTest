#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


/*바닥까지 이어지는 경로를 거쳐 숫자의 합이 가장 큰 경우를 찾아야 함으로 모든 경우를 구해야한다. 이때 dfs나 bfs를 떠올렸지만 한방향으로 탐색하던 것이 끝나 다른 방향으로 탐색하는 것 보다 dp 메모이제이션을 사용하여 삼각형 배열과 똑같은 dp 배열에 저장하여 마지막 깊이 까지 dp배열에 저장해 나가는게 더 빠르고 효율적이라 생각했기 때문에 dp가 더 적합할 것같았다.

dp 테이블에 저장할때 경우의 수는 1. 가장 왼쪽에 있는 경우 바로 위의 왼쪽값과 해당 위치값을 더하는 경우, 2. 가장 오른쪽에 있는 경우 바로 위의 오른쪽 값과 해당 위치값을 더하는 경우, 3. 그밖에 경우 바로 위의 dp에 저장된(그동안 구한 합)값 중 가장 큰 것과 해당 위치값을 더하는 경우
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