#include <string>
#include <vector>
#include <iostream>
//가운데 노란색의 개수는 전체의 width와 height에서 w-2,h-2이다. w와 h값에 임의값을 넣어보면서 w * h값이 brown 타일 개수 + yellow 개수와 같은 지점을 찾으면 된다. w가 h보다 크거나 같으므로 for문의 i를 작은 수 부터 큰 수로 커지게 하면서 yellow의 width를 구한다.
using namespace std;

vector<int> solution(int brown, int yellow) {
    int all_count = brown + yellow;
    int all_width = 0;
    int all_height = 0;
    int check = 0;
    vector<int> answer;

    for (int i = 1; i <= yellow; i++) {
        if (yellow % i == 0) {
            int yello_width = yellow / i;
            int check = (yello_width + 2) * (i + 2);
            if (check == all_count) {
                all_width = yello_width + 2;
                all_height = i + 2;
                break;
            }

        }
    }

    answer.push_back(all_width);
    answer.push_back(all_height);

    for (auto num : answer) {
        cout << num << endl;
    }



    return answer;
}