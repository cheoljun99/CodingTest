#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
// �ϳ��� �ٱ⾿ �� �������� �� �� ���������� Ž���س����Ƿ� dfs Ǯ�̹��� �����ؾ��Ѵ�.
// target������ �ּ� �ܰ踦 ã�ƾ� �ϹǷ� �ϳ��� �ٱ⸦ Ž���� ���� �� �ٸ� �ּ� �ܰ踦 ������ �б⸦ ���� �ٱⰡ ���� �� �����Ƿ� ��Ʈ��ŷ�� ����Ͽ� ������ Ž���� �ٱ⿡�� ǥ���Ͽ��� �湮 ǥ�ø� ������ �� �� �ٸ� �б��� �ٱ⸦ Ž���Ѵ�.

bool visited[50];
int step_min_cnt = 51;

//�ٸ� ���ڰ� �Ѱ����� �Ǻ��ϴ� �Լ�
bool diff_check(string a, string b) {
    int diff_cnt = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            diff_cnt++;
        }
    }

    if (diff_cnt == 1) {
        return true;

    }
    else
        return false;

}
//dfs ��ͷ� ����
void dfs(string begin, string target, vector<string>words, int step) {

    // step�� ������ ã�� step_min_cnt ũ�� Ž���� �ʿ䰡 ����.
    if (step_min_cnt <= step)
        return;


    if (begin == target) {
        step_min_cnt = min(step_min_cnt, step);
        return;
    }
    for (int i = 0; i < words.size(); i++) {
        if (diff_check(begin, words[i]) && visited[i] == false) {
            visited[i] = true;
            dfs(words[i], target, words, step + 1);
            visited[i] = false;// ��Ʈ��ŷ�� ���� dfs�� ���� ������ ���� ����� ���ƿ��� ���� �б����� ���� �湮�� ǥ�ø� �����.
        }
    }
    return;
}


int solution(string begin, string target, vector<string> words) {
    int answer = 0;

    dfs(begin, target, words, 0);

    cout << step_min_cnt << endl;
    if (step_min_cnt == 51)
        return answer = 0;

    return answer = step_min_cnt;
}