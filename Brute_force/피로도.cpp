#include <string>
#include <vector>

using namespace std;
int answer = -1;
int visited[8] = { 0 };

void dfs(int cnt_k, vector<vector<int>>dangeons, int step) {

    if (step > answer) {
        answer = step;
    }

    for (int i = 0; i < dangeons.size(); i++) {
        if (visited[i] == 0 && cnt_k >= dangeons[i][0]) {
            visited[i] = 1;
            dfs(cnt_k - dangeons[i][1], dangeons, step + 1);
            visited[i] = 0;
        }
    }



}

int solution(int k, vector<vector<int>> dungeons) {

    dfs(k, dungeons, 0);

    return answer;
}