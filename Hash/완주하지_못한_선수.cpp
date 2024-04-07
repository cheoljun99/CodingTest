#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());



    sort(completion.begin(), completion.end());



    int checker = -1;
    int completion_num = completion.size();
    for (int i = 0; i < completion_num; i++) {
        if (participant[i] != completion[i]) {
            checker = i;
            break;
        }
    }
    if (checker == -1) {
        answer = participant[completion_num];
    }
    else {
        answer = participant[checker];
    }
    return answer;
}