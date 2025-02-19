#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
// 하나의 줄기씩 한 방향으로 갈 수 있을때까지 탐색해나가므로 dfs 풀이법을 적용해야한다.
// target까지의 최소 단계를 찾아야 하므로 하나의 줄기를 탐색한 이후 또 다른 최소 단계를 가지는 분기를 가진 줄기가 있을 수 있으므로 백트래킹을 사용하여 기존에 탐색한 줄기에서 표시하였던 방문 표시를 지워준 후 또 다른 분기의 줄기를 탐색한다.

bool visited[50];
int step_min_cnt = 51;

//다른 문자가 한개인지 판별하는 함수
bool diff_check(string a, string b) {
    int diff_cnt = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            diff_cnt++;
        }
    }

    if (diff_cnt == 1) {
        return true;

    }
    else
        return false;

}
//dfs 재귀로 구현
void dfs(string begin, string target, vector<string>words, int step) {

    // step이 이전에 찾은 step_min_cnt 크면 탐색할 필요가 없다.
    if (step_min_cnt <= step)
        return;


    if (begin == target) {
        step_min_cnt = min(step_min_cnt, step);
        return;
    }
    for (int i = 0; i < words.size(); i++) {
        if (diff_check(begin, words[i]) && visited[i] == false) {
            visited[i] = true;
            dfs(words[i], target, words, step + 1);
            visited[i] = false;// 백트래킹을 위해 dfs의 종료 조건을 통해 여기로 돌아오면 다음 분기점을 위해 방문한 표시를 지운다.
        }
    }
    return;
}


int solution(string begin, string target, vector<string> words) {
    int answer = 0;

    dfs(begin, target, words, 0);

    cout << step_min_cnt << endl;
    if (step_min_cnt == 51)
        return answer = 0;

    return answer = step_min_cnt;
}