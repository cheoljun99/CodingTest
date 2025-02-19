#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    priority_queue<int> pq_less;
    priority_queue<int, vector<int>, greater<int>> pq_greater;
    string number = "";

    int cnt = 0;
    for (int i = 0; i < operations.size(); i++) {
        number = "";
        if (cnt == 0) {
            while (!pq_less.empty()) pq_less.pop();
            while (!pq_greater.empty()) pq_greater.pop();
        }

        if (operations[i][0] == 'I') {
            for (int j = 2; j < operations[i].size(); j++) {
                number += operations[i][j];
            }
            pq_less.push(stoi(number));
            pq_greater.push(stoi(number));
            cnt++;
        }
        else {

            if (cnt == 0) {
                continue;
            }

            for (int j = 2; j < operations[i].size(); j++) {
                number += operations[i][j];
            }

            if (number == "1") {
                pq_less.pop();
                cnt--;
            }

            else {
                pq_greater.pop();
                cnt--;
            }

        }

    }

    if (cnt == 0) {
        answer.push_back(0);
        answer.push_back(0);
    }
    else {
        answer.push_back(pq_less.top());
        answer.push_back(pq_greater.top());

    }

    return answer;
}