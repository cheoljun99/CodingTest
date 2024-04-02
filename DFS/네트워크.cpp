#include <string>
#include <vector>

using namespace std;

/*[i][k]�� �ǹ� : i��° ��ǻ�Ϳ� k��° ��ǻ�Ϳ��� ���� ���� ���� computers[i][k] == 1 �� ��� i��° ��ǻ�Ϳ� k��° ��ǻ�Ͱ� ����Ǿ� �ִٴ� ���̴�
for������ 0��°���� n-1��° ��ǻ�ͱ��� �˻縦 �ϸ鼭 ���� "���� �湮���� ���� ��ǻ��"��� DFS�� ���� �湮�� �����Ѵ�. �̶� DFS�� ����Լ��� �����ϰ� ��͸� ���� ����Ǿ��ִ� ���� visited �迭�� ǥ���Ѵ�. ����Ǿ� �ִ� ��ǻ�͵��� DFS�� ���� ��� �湮 ǥ�Ⱑ �Ǿ��ִµ� solution�Լ����� for���� ���� �湮ó���� �ȵǾ� �ִ� ��ǻ�͸� �߰��Ѵٸ� �׵��� DFS�� ���� Ž���� ��Ʈ��ũ�ʹ� �ٸ� ��Ʈ��ũ�� ����Ǿ� �ִ� ��ǻ���̴�. ������ �ش� ��带 �� DFS�� ���� ����Ǿ��ִ� ��带 ã�� �̷��� ������ �ݺ��� ���� ��������� solution �Լ����� DFS�� ������ Ƚ���� ������ ��Ʈ��ũ�� ���� �ȴ�.*/

int visited[200] = { 0 };
int counter = 0;

void dfs(int cur, int n, vector<vector<int>> computers) {
    visited[cur] = 1;
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0 && computers[cur][i] == 1)
            dfs(i, n, computers);
    }
}

int solution(int n, vector<vector<int>> computers) {


    int answer = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            dfs(i, n, computers);
            counter++;
        }
    }

    return answer = counter;
}