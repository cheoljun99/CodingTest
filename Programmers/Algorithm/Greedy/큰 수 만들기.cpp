#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int number_size = number.size();
    int idx_checker = 0;
    int n = number_size - k;
    while (n != 0) {
        char top = '0';
        for (int i = idx_checker; i <= number_size - n; i++) {
            if (top < number[i]) {
                idx_checker = i + 1;
                top = number[i];
            }
        }
        answer += top;
        n--;
    }
    return answer;
}