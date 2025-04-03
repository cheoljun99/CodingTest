#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int i=0;i<T;i++){
        string str;
        cin>>str;

        unordered_map<char,int>uM;
        bool checker=0;

        for(int j=0;j<str.size();j++){

            if(uM.find(str[j])!=uM.end()){
                uM[str[j]]++;

                if(uM[str[j]]==3){
                    if(str[j+1]!=str[j]){

                        checker=1;
                        break;
                    }
                    uM[str[j]]=0;
                    j+=1;
                }
            }
            else{
                uM.insert({str[j],1});
            }

        }
        if(checker){
            cout<<"FAKE"<<'\n';
        }
        else{
            cout<<"OK"<<'\n';
        }

    }
    return 0;
}
