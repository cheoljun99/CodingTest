#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*dfs나 bfs를 생각했지만 효율성이 좋을 거 같지 않다. 입력받은 좌표로 2차원 평면(2차원 배열)으로 생각해 봤을때 학교까지 가는 길(집과 학교를 제외한 2차원 평면의 위치==배열)마다 그곳으로 오는 경로의 최소경로들의 개수 정보를 담고 있으면 학교 위치에서 도착하기위한 최소경로의 개수를 담으면 답이된다. 즉 dp가 효율적이다. */



int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;

    vector<vector<int>> dp_map(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n + 1; i++) {
        dp_map[i][0] = -1;
    }
    for (int i = 0; i < m + 1; i++) {
        dp_map[0][i] = -1;
    }

    for (int i = 0; i < puddles.size(); i++) {
        dp_map[puddles[i][1]][puddles[i][0]] = -1;
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            if (i == 1 && j == 1)
                dp_map[i][j] = 1;
            else if (dp_map[i][j - 1] == -1 && dp_map[i - 1][j] != -1 && dp_map[i][j] == 0) {
                dp_map[i][j] = dp_map[i - 1][j] % 1000000007;
            }
            else if (dp_map[i][j - 1] != -1 && dp_map[i - 1][j] == -1 && dp_map[i][j] == 0) {
                dp_map[i][j] = dp_map[i][j - 1] % 1000000007;
            }
            else if (dp_map[i][j - 1] != -1 && dp_map[i - 1][j] != -1 && dp_map[i][j] == 0) {
                dp_map[i][j] = (dp_map[i][j - 1] + dp_map[i - 1][j]) % 1000000007;
            }

        }
    }


    return answer = dp_map[n][m];
}