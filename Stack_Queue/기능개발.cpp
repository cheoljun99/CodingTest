#include <iostream>
#include <string>
#include <vector>
#include <list>


using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    list<int>L;
    
    for(int i=0;i<progresses.size();i++){
        int check_point=progresses[i];
        int check_num=0;
        while(check_point<100){
            check_num++;
            check_point+=speeds[i];
            
        }
        cout<<check_num<<endl;
        L.push_back(check_num);
    }
    int a=L.front();
    while(!L.empty()){
        int cnt=1;
        while(!L.empty()){
            L.pop_front();
            int b=L.front();
            
            if(a>=b&&b!=0){
                
                cnt++;
            }
            else{
                a=b;
                break;
            }
                
            
        }
            
        answer.push_back(cnt);
    }
    
    
    return answer;
}