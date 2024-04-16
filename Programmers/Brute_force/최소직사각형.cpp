#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int a=0;
    int b=0;
    
    for(int i=0; i<sizes.size(); i++)
    {
        for(int j=0; j<sizes[i].size(); j++)
        {
            cout << sizes[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i=0; i<sizes.size(); i++)
    {
        sort(sizes[i].begin(),sizes[i].end(),greater<int>());
    }
    cout<< "정렬 후"<<endl;
    for(int i=0; i<sizes.size(); i++)
    {
        for(int j=0; j<sizes[i].size(); j++)
        {
            cout << sizes[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<< "최적 사이즈"<<endl;
    for(int i=0; i<sizes.size(); i++)
    {
        for(int j=0; j<sizes[i].size(); j++)
        {
            if(j==0&&a<sizes[i][j]){
                a=sizes[i][j];
            }
            else if(j==1&&b<sizes[i][j]){
                b=sizes[i][j];
            }
        }
        
    }
    cout<< "a : "<<a<<endl;
    cout<< "b : "<<b<<endl;
    
    answer=a*b;

    
    
    
    return answer;
}