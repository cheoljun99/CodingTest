#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;

    map<int, string> m_i_s;
    map<string, int> m_s_i;

    for (int i = 0; i < players.size(); i++) {
        m_i_s.insert({ i,players[i] });
        m_s_i.insert({ players[i],i });
    }

    for (int i = 0; i < callings.size(); i++) {

        int temp_rank = m_s_i[callings[i]]; // 뒷순위 사람 등수

        string temp_name = m_i_s[temp_rank - 1];//앞순위 사람 이름

        m_s_i[temp_name] = temp_rank;
        m_s_i[callings[i]] = temp_rank - 1;

        m_i_s[temp_rank] = temp_name;
        m_i_s[temp_rank - 1] = callings[i];

    }

    for (int i = 0; i < m_i_s.size(); i++) {
        answer.push_back(m_i_s[i]);
    }

    return answer;
}