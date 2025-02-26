# CodingTest

CodingTest

# String Split
C++로 Split 구현하기 stringstream 사용 - 2025.02.26
```
vector<string> splitString(string& str,char delimeter) {

	vector<string> result;
	stringstream ss(str);
	string token="";

	while (getline(ss, token, delimeter)) {
		result.push_back(token);
	}
	return result;
}
```
