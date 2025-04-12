#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    while(getline(cin,line)){
        if(line.size()==1&&line[0]=='#'){
            return 0;
        }
        int cnt=0;
        for(int i=0;i<line.size();i++){
            if(line[i]=='a'||line[i]=='A'||line[i]=='e'||line[i]=='E'||line[i]=='o'||line[i]=='O'||line[i]=='i'||line[i]=='I'||line[i]=='u'||line[i]=='U'){
                cnt++;
            }
        }
        cout<<cnt<<'\n';

    }
    return 0;
}
