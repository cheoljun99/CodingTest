#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string name) {
    int answer = 0;
    int n = name.length();
    int index = 0;
    int straight = n - 1;// 한쪽 방향으로 쭉
    for (auto ch : name) {
        if (ch != 'A') {

            answer += min(ch - 'A', 'Z' - ch + 1);
        }

    }
    for (int i = 0; i < n; i++) {

        int ind = i + 1;
        while (ind < n && name[ind] == 'A') {
            ind++;
        }


        straight = min(straight, i + n - ind + min(i, n - ind));
    }



    return answer += straight;
}
