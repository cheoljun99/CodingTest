#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
bool compare(string a, string b) {

    return a + b > b + a;

}

// ������ ���� string���� �ٲ��ְ� string���� �ٲ� ���Ͱ����� �����Ѵ�.
// ���� ������ �ΰ��� ���ڷ� �� ���ڸ� ������ �ٲ� �ٿ��� ��� ������� 3,10�̶�� ���� �� 310�� 103���� ũ�Ƿ�
// a+b�� b+a���� ū ��� a,b������ ������ �� �ֵ����Ѵ�.
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;

    for (auto num : numbers) {
        temp.push_back(to_string(num));
    }

    sort(temp.begin(), temp.end(), compare);

    if (temp.at(0) == "0")
        return answer = "0"; // [0,0,0]�� ���°�� "0"�� ����Ͽ�����.

    for (vector<string>::iterator p = temp.begin(); p != temp.end(); p++)
    {
        answer += *p;
    }

    return answer;
}