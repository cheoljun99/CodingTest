#include <string>
#include <vector>
#include <iostream>
//��� ������� ������ ��ü�� width�� height���� w-2,h-2�̴�. w�� h���� ���ǰ��� �־�鼭 w * h���� brown Ÿ�� ���� + yellow ������ ���� ������ ã���� �ȴ�. w�� h���� ũ�ų� �����Ƿ� for���� i�� ���� �� ���� ū ���� Ŀ���� �ϸ鼭 yellow�� width�� ���Ѵ�.
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