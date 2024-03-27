#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    
    
    int answer = 0;
    
    priority_queue <int, vector<int>, greater<int>> pq (scoville.begin(),scoville.end());
    
    
    int counter = 0;
    while(pq.size()>1&&pq.top()<K){
    
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a+(b*2));
        counter++;
    }
    
    if(pq.top()<K)
        answer=-1;
    else
        answer=counter;

    
    
    return answer;
}