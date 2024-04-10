#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;

    unordered_map<string, int> u_m;


    for (auto first : clothes) {
        u_m[first[1]]++;
    }
    for (auto elem : u_m) {
        u_m[elem.first]++;
    }
    for (auto elem : u_m) {
        answer *= u_m[elem.first];
    }
    /*
    for(pair<string,int> elem:u_m){
        cout<<"key : "<<elem.first<<" value : "<<elem.second<<endl;
    }
    */




    return answer - 1;
}