#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
bool compare(string a, string b) {

    return a + b > b + a;

}

// 벡터의 값을 string으로 바꿔주고 string으로 바꾼 벡터값들을 정렬한다.
// 정렬 기준은 두개의 숫자로 된 글자를 순서를 바꿔 붙였을 경우 예를들어 3,10이라고 했을 때 310이 103보다 크므로
// a+b가 b+a보다 큰 경우 a,b순으로 정렬할 수 있도록한다.
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;

    for (auto num : numbers) {
        temp.push_back(to_string(num));
    }

    sort(temp.begin(), temp.end(), compare);

    if (temp.at(0) == "0")
        return answer = "0"; // [0,0,0]이 들어온경우 "0"을 출력하여야함.

    for (vector<string>::iterator p = temp.begin(); p != temp.end(); p++)
    {
        answer += *p;
    }

    return answer;
}