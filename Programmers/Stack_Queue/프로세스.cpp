#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;

    queue<pair<int, int>> q;
    priority_queue<int>pq;

    for (int i = 0; i < priorities.size(); i++) {

        q.push({ i,priorities[i] });
        pq.push(priorities[i]);

    }

    int counter = 1;
    while (!q.empty()) {
        int finder = q.front().first;
        int checker = q.front().second;

        if (checker != pq.top()) {
            q.push({ finder,checker });
            q.pop();
        }
        else {
            q.pop();
            pq.pop();

            if (finder == location) {
                answer = counter;
            }
            counter++;
        }
    }
    return answer;
}