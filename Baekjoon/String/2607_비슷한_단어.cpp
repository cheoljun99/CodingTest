#include<bits/stdc++.h>

using namespace std;

int main()
 {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	string firstStr;
	cin >> firstStr;

	map<char, int>firstStrMap;

	for (int i = 0; i < firstStr.size(); i++) {
		if (firstStrMap.find(firstStr[i]) == firstStrMap.end())
			firstStrMap.insert({ firstStr[i] ,1 });
		else
			firstStrMap[firstStr[i]]++;
	}

	int res = 0;
	for (int i = 0; i < N - 1; i++) {
		string tempStr;
		cin >> tempStr;

		if (abs((int)(tempStr.size()) - (int)(firstStr.size())) >= 2) {
			continue;
		}
		map<char, int>tempStrMap;

		for (int i = 0; i < tempStr.size(); i++) {
			if (tempStrMap.find(tempStr[i]) == tempStrMap.end())
				tempStrMap.insert({ tempStr[i] ,1 });
			else
				tempStrMap[tempStr[i]]++;
		}

		for (auto i : firstStrMap) {
			if (tempStrMap.find(i.first) != tempStrMap.end()) {
				tempStrMap[i.first] -= i.second;
			}
			else {
				tempStrMap.insert({ i.first ,0 });
				tempStrMap[i.first] -= i.second;
			}

		}
		
		int cntOne=0;
		int cntRemain = 0;
		for (auto i : tempStrMap) {
			if (i.second == 1 || i.second == -1)
				cntOne++;
			else if (i.second <= -2 || i.second >= 2)
				cntRemain++;
		}
		if (cntOne == 0 && cntRemain == 0)
			res++;
		else if (cntOne == 1 && cntRemain == 0)
			res++;
		else if(cntOne == 2 && cntRemain == 0)
			res++;
	}
	cout << res;
}