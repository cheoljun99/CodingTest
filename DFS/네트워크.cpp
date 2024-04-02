#include <string>
#include <vector>

using namespace std;

/*[i][k]의 의미 : i번째 컴퓨터와 k번째 컴퓨터와의 연결 유무 따라서 computers[i][k] == 1 인 경우 i번째 컴퓨터와 k번째 컴퓨터가 연결되어 있다는 뜻이다
for문으로 0번째부터 n-1번째 컴퓨터까지 검사를 하면서 만약 "아직 방문하지 않은 컴퓨터"라면 DFS를 통해 방문을 실행한다. 이때 DFS는 재귀함수로 구현하고 재귀를 통해 연결되어있는 노드들 visited 배열에 표기한다. 연결되어 있는 컴퓨터들은 DFS를 통해 모두 방문 표기가 되어있는데 solution함수에서 for문을 돌다 방문처리가 안되어 있는 컴퓨터를 발견한다며 그동안 DFS를 통해 탐색한 네트워크와는 다른 네트워크에 연결되어 있는 컴퓨터이다. 때문에 해당 노드를 또 DFS를 돌려 연결되어있는 노드를 찾고 이러한 과정의 반복을 통해 결과적으로 solution 함수에서 DFS를 실행한 횟수가 형성된 네트워크의 수가 된다.*/

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