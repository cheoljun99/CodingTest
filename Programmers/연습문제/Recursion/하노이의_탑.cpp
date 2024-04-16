#include <string>
#include <vector>

using namespace std;
//Àç±Í
void hanoi(int n, int departure, int transit, int arrival, vector<vector<int>>& answer) {
    if (n == 1) {
        answer.push_back({ departure,arrival });
        return;
    }
    else {
        hanoi(n - 1, departure, arrival, transit, answer);
        hanoi(1, departure, transit, arrival, answer);
        hanoi(n - 1, transit, departure, arrival, answer);
    }
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    hanoi(n, 1, 2, 3, answer);
    return answer;
}