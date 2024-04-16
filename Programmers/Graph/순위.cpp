#include <string>
#include <vector>
#include <queue>
#include <iostream>


using namespace std;



int solution(int n, vector<vector<int>> results) {
    int answer = 0;
    vector<vector<bool>> graph_table(n, vector<bool>(n, false));
    queue<pair<int, int>>q;


    for (int i = 0; i < results.size(); i++) {
        graph_table[results[i][0] - 1][results[i][1] - 1] = true;
    }
    //플로이드-워셜 알고리즘 
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (graph_table[i][k] == true && graph_table[k][j] == true)
                    graph_table[i][j] = true;

    /*
    bfs 시간초과
    for(int i=0;i<n;i++){
        int current=i;
        int past=i;
        q.push(pair<int,int>(current,past));
        while(!q.empty()){
            current=q.front().first;
            past=q.front().second;
            q.pop();
            for (int i = 0; i < n; i++) {
                if(graph_table[current][i]==true){
                    q.push(make_pair(i,past));
                    graph_table[past][i]=true;
                }
            }
        }

    }*/

    /*
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cout<<graph_table[i][j]<<" ";
        }
        cout<<endl;
    }*/

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (graph_table[i][j] == true || graph_table[j][i] == true)
                count++;
        if (count == n - 1)
            answer++;
    }

    return answer;
}
/* bfs 통과
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <string.h>
using namespace std;

int cntArr[101] = {0};


int BFS(int init, vector<int>* vecArrWin, vector<int>* vecArrLose){
    queue<int> que;
    que.push(init);
    int cnt = 0;
    int visited[101] = {0};
    visited[init] = 1;
    while(!que.empty()){

        int startNode = que.front();
        que.pop();

        for(int i = 0; i<vecArrWin[startNode].size(); i++){	//i가 승리자 -> i에게 진 사람들 카운트
            if(visited[vecArrWin[startNode][i]] == 0){
                visited[vecArrWin[startNode][i]] = 1;
                que.push(vecArrWin[startNode][i]);
                cnt++;
            }
        }
    }
    memset(visited, 0, sizeof(visited));
    que.push(init);
    visited[init] = 1;
    while(!que.empty()){
        int startNode = que.front();
        que.pop();

        for(int i = 0; i<vecArrLose[startNode].size(); i++){ //i가 패배자 -> i가 이긴 사람들 카운트
            if(visited[vecArrLose[startNode][i]] == 0){
                visited[vecArrLose[startNode][i]] = 1;
                que.push(vecArrLose[startNode][i]);
                cnt++;
            }
        }
    }
    cout << endl;
    return cnt;

}



int solution(int n, vector<vector<int>> results) {
    int answer = 0;

    vector<int> vecArrWin[101];
    vector<int> vecArrLose[101];

    int winner, loser;
    for(int i = 0; i<results.size(); i++){
        winner = results[i][0];
        loser = results[i][1];

        vecArrWin[winner].push_back(loser);
        vecArrLose[loser].push_back(winner);
    }
    for(int i = 1; i<=n; i++){
        if(n-1 == BFS(i, vecArrWin, vecArrLose)){		//자신을 제외한 n-1명과 승/패 관계 알아야 함
            answer++;
        }
    }
    return answer;
}
*/