#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> checker;
vector<string> saver;
int ticket_cnt = 0;//dfs 끝나면 다시 원상복구 해야함

bool priority_check(vector<string> checker, vector<string> saver) {

    for (int i = 0; i < saver.size(); i++) {


        if (saver[i] < checker[i]) {

            return 1;
        }
        else if (saver[i] > checker[i]) {
            return 0;
        }

    }
    return 0;
}

void dfs(vector<vector<string>> tickets, vector<string> saver, vector<int>& used_ticket, int ticket_cnt, string cur_rot) {

    if (ticket_cnt == tickets.size()) {
        if (checker.size() == 0) {
            checker = saver;
            return;
        }
        else if (priority_check(checker, saver) == 1) {
            checker = saver;
            return;
        }
    }
    for (int i = 0; i < tickets.size(); i++) {
        if (tickets[i][0] == cur_rot && used_ticket[i] == 0)
        {
            used_ticket[i] = 1;
            ticket_cnt++;
            saver.push_back(tickets[i][1]);
            dfs(tickets, saver, used_ticket, ticket_cnt, tickets[i][1]);
            saver.pop_back();
            ticket_cnt--;
            used_ticket[i] = 0;
        }
    }
    return;
}

vector<string> solution(vector<vector<string>> tickets) {
    vector<string> answer;
    int tickets_num = tickets.size();
    vector<int> used_ticket(tickets_num, 0);

    for (int i = 0; i < tickets.size(); i++) {
        if (tickets[i][0] == "ICN") {
            saver.push_back("ICN");
            used_ticket[i] = 1;
            ticket_cnt++;
            saver.push_back(tickets[i][1]);
            dfs(tickets, saver, used_ticket, ticket_cnt, tickets[i][1]);
            saver.pop_back();
            ticket_cnt--;
            used_ticket[i] = 0;
            saver.pop_back();
        }
    }
    return answer = checker;
}