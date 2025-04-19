#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;


vector<string> splitString(const string& str) {
    vector<string> result;
    string token;

    for (char ch : str) {
        if (isalpha(ch) || ch == '-') {
            token += ch;
        }
        else {
            if (!token.empty()) {
                result.push_back(token);
                token.clear();
            }
        }
    }

    if (!token.empty()) {
        result.push_back(token);
    }

    return result;
}

bool cmp(string& a, string& b) {
    return a.size() > b.size();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    string input="";
    string temp="";
    while (1) {
        cin >> input;
        if (input == "E-N-D") {
            temp += input;
            temp += " ";
            break;
        }
        temp += input;
        temp += " ";
    }
    vector<string>result = splitString(temp);
    sort(result.begin(), result.end(),cmp);
    for (auto i : result[0]) {
        cout << (char)tolower(i);
    }
}