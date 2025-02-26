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

# Vetor 원소 Count
C++ vector에서 특정 원소 개수 찾기 algorithm의 count(begin, end, value)이용

시간복잡도: O(N)
```
#include <algorithm>
int main(){
 vector<int> a = {1, 4, 1, 2, 4, 2, 4, 2, 3, 4, 4};
 cout << "1의 개수 : " << count(a.begin(),a.end(),1) << endl;
}
```
