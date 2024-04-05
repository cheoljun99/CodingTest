#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*dfs�� bfs�� ���������� ȿ������ ���� �� ���� �ʴ�. �Է¹��� ��ǥ�� 2���� ���(2���� �迭)���� ������ ������ �б����� ���� ��(���� �б��� ������ 2���� ����� ��ġ==�迭)���� �װ����� ���� ����� �ּҰ�ε��� ���� ������ ��� ������ �б� ��ġ���� �����ϱ����� �ּҰ���� ������ ������ ���̵ȴ�. �� dp�� ȿ�����̴�. */



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