#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<vector<int>> graph_table(n, vector<int>(n));
    vector<int>dist(n, -1);
    queue<int>q;

    /*
    인접리스트 방식
    vector<vector<int>> graph_list(n+1);
    for(int i=0; i<edge.size(); i++)
    {
        int from = edge[i][0];
        int to = edge[i][1];

        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    */



    for (int i = 0; i < edge.size(); i++) {
        graph_table[edge[i][0] - 1][edge[i][1] - 1] = 1;
        graph_table[edge[i][1] - 1][edge[i][0] - 1] = 1;

    }

    dist[0] = 0;
    q.push(0);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int i = 0; i < n; i++) {
            if (graph_table[current][i] == 1 && dist[i] == -1) {
                q.push(i);
                dist[i] = dist[current] + 1;
            }
        }
    }


    int max = *max_element(dist.begin(), dist.end());//*안붙이면 이터레이터 반환

    for (int i = 0; i < dist.size(); i++)
    {
        if (dist[i] == max)
        {
            answer++;
        }
    }


    return answer;
}