#include<bits/stdc++.h>

using namespace std;

vector<string> splitString(string& str,char delimeter) {

	vector<string> result;
	stringstream ss(str);
	string token="";

	while (getline(ss, token, delimeter)) {
		result.push_back(token);
	}
	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string startTime, finishTime, exitTime;
	cin >> startTime >> finishTime >> exitTime;
	cin.ignore();
	string input;

	vector<string>startTimeSplit = splitString(startTime, ':');
	vector<string>finishTimeSplit = splitString(finishTime, ':');
	vector<string>exitTimeSplit = splitString(exitTime, ':');

	map<string, int> checker;
	int result = 0;
	while (getline(cin, input)) {
		vector<string>inputSplit = splitString(input,' ');
		vector<string>inputTimeSplit= splitString(inputSplit[0], ':');
		// 출석 체크
		if (startTimeSplit[0] > inputTimeSplit[0]) {
			auto iter = checker.find(inputSplit[1]);
			if (iter == checker.end()) {
				checker.insert({ inputSplit[1],1 });
			}
		}
		else if (startTimeSplit[0] == inputTimeSplit[0]) {
			if (startTimeSplit[1] >= inputTimeSplit[1]) {
				auto iter = checker.find(inputSplit[1]);
				if (iter == checker.end()) {
					checker.insert({ inputSplit[1],1 });
				}
			}
		}
		//퇴실 체크
		if ((finishTimeSplit[0] < inputTimeSplit[0]) && (exitTimeSplit[0] > inputTimeSplit[0])) {
			auto iter = checker.find(inputSplit[1]);
			if (iter != checker.end()) {
				checker[inputSplit[1]]++;
			}

		}
		else if ((finishTimeSplit[0] < inputTimeSplit[0]) && (exitTimeSplit[0] == inputTimeSplit[0])) {
			if ((exitTimeSplit[1] >= inputTimeSplit[1])) {
				auto iter = checker.find(inputSplit[1]);
				if (iter != checker.end()) {
					checker[inputSplit[1]]++;
				}
			}
		}
		else if ((finishTimeSplit[0] == inputTimeSplit[0]) && (exitTimeSplit[0] > inputTimeSplit[0])) {
			if ((finishTimeSplit[1] <= inputTimeSplit[1])) {
				auto iter = checker.find(inputSplit[1]);
				if (iter != checker.end()) {
					checker[inputSplit[1]]++;
				}
			}

		}
		else if ((finishTimeSplit[0] == inputTimeSplit[0]) && (exitTimeSplit[0] == inputTimeSplit[0])) {
			if ((finishTimeSplit[1] <= inputTimeSplit[1])&&(exitTimeSplit[1] >= inputTimeSplit[1])) {
				auto iter = checker.find(inputSplit[1]);
				if (iter != checker.end()) {
					checker[inputSplit[1]]++;
				}
			}
		}
	}

	for (auto i : checker) {
		if (i.second > 1) {
			result++;
		}
	}
	cout << result;
}