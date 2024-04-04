#include <string>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int N, int number) {
    int answer = 0;
    vector<unordered_set<int>> dp(8);
    int first_num = 0;
    for (int i = 0; i < 8; i++) {
        first_num = 10 * first_num + N;
        dp[i].insert(first_num);
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < i; j++) {
            for (int front : dp[j]) {
                for (int second : dp[i - j - 1]) {
                    dp[i].insert(front + second);
                    dp[i].insert(front - second);
                    dp[i].insert(front * second);
                    if (second != 0)
                        dp[i].insert(front / second);
                }
            }
        }
        if (dp[i].find(number) != dp[i].end()) {
            return answer = i + 1;
        }
    }
    return answer = -1;
}