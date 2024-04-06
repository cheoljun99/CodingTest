#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    vector<int> table(n, 1);



    for (int i = 0; i < reserve.size(); i++) {
        table[reserve[i] - 1] = 2;
    }

    for (int i = 0; i < lost.size(); i++) {
        table[lost[i] - 1] = table[lost[i] - 1] - 1;
    }

    for (int i = 0; i < n; i++) {
        if (table[i] == 0) {
            if (table[i - 1] == 2)
            {
                table[i - 1]--;
                table[i]++;
            }
            else if (table[i + 1] == 2)
            {
                table[i + 1]--;
                table[i]++;
            }

        }

    }

    for (int i = 0; i < n; i++) {
        if (table[i] > 0) {
            answer++;
        }

    }
    return answer;
}