#include<vector>
#include<queue>
#include<iostream>


using namespace std;

/*최단 거리를 구하는 것이 목적이고 방법은 bfs를 사용한다. 모든 지점을 찾아 방문하면서 해당 위치에 도달하기 까지 지나간 칸 개수를 저장하는 배열을 선언한다. bfs는 queue를 사용하여 구현할 수 있다. n*m에서 n은 행 m은 열이고 행은 maps의 size 열은 maps 백터중 하나의 int형 벡터의 size이다.*/
int visited[101][101]={0};
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int n,m;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    queue<pair<int,int>>q;
    n = maps.size();
    m = maps[0].size();
    
    q.push({0,0});
    visited[0][0]=1;
    while(!q.empty()){
        
        
        pair<int,int> cur = q.front();
        q.pop();
        for(int i=0;i<4;i++){
           
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
            
            if(x>=0&&y>=0&&x<n&&y<m){
                if(visited[x][y]==0&&maps[x][y]==1){
                    q.push({x,y});
                    visited[x][y]=visited[cur.first][cur.second]+1;
                }
            }
            
        }
        
        
    }
    if(visited[n-1][m-1]==0)
        return -1;
    answer=visited[n-1][m-1];
    
    return answer;
}