#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	for (int i = 0; i < str.size();i++) {
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
    }
    cout<<str;
	return 0;
}