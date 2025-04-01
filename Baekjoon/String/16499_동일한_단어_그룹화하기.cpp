#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int N;
    cin>>N;
    map<string,int>m;

    for(int i=0;i<N;i++){
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        if(m.find(str)==m.end()){
            m.insert({str,1});
        }
        else{
            m[str]++;
        }
    }
    cout<<m.size()<<'\n';
}
