#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (int i = 0; i < commands.size(); i++) {

        vector<int> cut;
        int a = commands[i][0];
        int b = commands[i][1];
        int c = commands[i][2];
        for (int j = a - 1; j <= b - 1; j++) {
            cut.push_back(array[j]);

        }
        sort(cut.begin(), cut.end(), less<int>());

        answer.push_back(cut[c - 1]);


    }

    return answer;
}