#include <string>
#include <vector>

using namespace std;

int cnt;
/*dfs 깊이우선탐색으로 트리를 가장 깊은 노드부터 탐색하면서 모든 노드를 탐색하는 것으로 stack과 재귀의 방식이 있다 해당 문제에서는 재귀를 통해 구현하였고 트리의 분기는 + 혹은 -의 과정을 통해 2개의 노드로 나타낸다.*/
void dfs(vector<int>& numbers, int& target, int sum, int idx) {
    if (idx == numbers.size()) {
        if (sum == target)
            cnt++;
        return;
    }
    dfs(numbers, target, sum + numbers[idx], idx + 1);
    dfs(numbers, target, sum - numbers[idx], idx + 1);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers, target, 0, 0);
    answer = cnt;


    return answer;
}