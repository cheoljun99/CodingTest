#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<string> temp;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		temp.push_back(str);
	}
	
	int M;
	cin >> M;
	vector<string>strList;
	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		bool check = 0;
		for (int j = 0; j < N; j++) {
			if (temp[j] == str) {
				check = 1;
				break;
			}
		}
		if (check != 1) {
			strList.push_back(str);
		}
		
	}
	if (N == 1) {
		cout << strList[0];
		return 0;
	}
	for (int i = 0; i< temp.size(); i++) {
		if (temp[i] == "?") {
			if (i == 0) {
				for (int j = 0; j < strList.size(); j++) {
					if (temp[i + 1][0] == strList[j][strList[j].size() - 1]) {

						cout << strList[j];
						return 0;
					}
				}
			}
			else if (i == temp.size() - 1) {
				for (int j = 0; j < strList.size(); j++) {
					if (temp[i - 1][temp[i - 1].size() - 1] == strList[j][0]) {
						cout << strList[j];
						return 0;
					}
				}
			}
			else {
				for (int j = 0; j < strList.size(); j++) {
					if (temp[i - 1][temp[i - 1].size() - 1] == strList[j][0] && temp[i + 1][0] == strList[j][strList[j].size() - 1]) {
						cout << strList[j];
						return 0;
					}
				}
			}
		}
	}
}