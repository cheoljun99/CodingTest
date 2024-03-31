#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> one ={1,2,3,4,5};
    vector<int> two ={2,1,2,3,2,4,2,5};
    vector<int> three ={3,3,1,1,2,2,4,4,5,5};
    int a=0;
    int b=0;
    int c=0;
    for(int i=0;i<answers.size();i++){
        if(answers[i]==one[i%5])
            a++;
        if(answers[i]==two[i%8])
            b++;
        if(answers[i]==three[i%10])
            c++;
        
    }
    cout<< "a : "<<a<<endl;
    cout<< "b : "<<b<<endl;
    cout<< "c : "<<c<<endl;
    
    vector<int> answer;
    
    if(a>b&&a>c){
        answer.push_back(1);
    }
    else if(b>a&&b>c){
        answer.push_back(2);
    }
    else if(c>a&&c>b){
        answer.push_back(3);
    }
    else if(a>c&&a==b){
        answer.push_back(1);
        answer.push_back(2);
    }
    else if(a>b&&a==c){
        answer.push_back(1);
        answer.push_back(3);
    }
    else if(b>a&&b==c){
        answer.push_back(2);
        answer.push_back(3);
    }
    else if(a==b&&b==c){
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    return answer;
}