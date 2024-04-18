#include <string>
#include <vector>
#include <queue>
#include <cmath>
#define MAX 100

using namespace std;

vector<int> table[MAX];

int bfs(int v1, int v2) {
    int count = 1;
    bool visited[MAX] = { 0 };

    visited[v1] = 1;
    visited[v2] = 1;

    queue<int> q;

    q.push(v1);
    while (!q.empty()) {

        int cur_node = q.front();
        q.pop();
        for (int i = 0; i < table[cur_node].size(); i++) {
            int next_node = table[cur_node][i];
            if (visited[next_node] == 1)
                continue;
            q.push(next_node);
            count++;
            visited[next_node] = 1;
        }
    }

    return count;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = -1;

    for (auto wire : wires) {
        table[wire[0] - 1].push_back(wire[1] - 1);
        table[wire[1] - 1].push_back(wire[0] - 1);
    }
    for (auto wire : wires) {
        int v1 = wire[0] - 1;
        int v2 = wire[1] - 1;
        int left = bfs(v1, v2);
        int right = n - left;
        if (answer == -1) {
            answer = abs(left - right);//Àý´ë°ª **
        }
        answer = min(answer, abs(left - right));
    }

    return answer;
}