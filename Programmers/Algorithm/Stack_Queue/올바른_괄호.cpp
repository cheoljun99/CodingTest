#include <string>
#include <iostream>
#include <stack>

using namespace std;
 
bool solution(string s)
{
    bool answer = true;
    stack<char> stk;
    
    
    
    if(s.front()==')')
        return answer=false;
    else if(s.back()=='(')
        return answer=false;
    
    
    for(int i=0; i<s.size();i++){
        
        if(s[i]=='(')
            stk.push('(');
        
        else{
            if(!stk.empty()&&stk.top()=='(')
                stk.pop();
            else
                stk.push(')');
            
        }
            
    }
    
    if(!stk.empty()){
        answer=false;
    }

    return answer;
}
