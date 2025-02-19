#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int area[101][101] = { 0 };
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int cnt_min_step = 999999999;

void dfs(int characterX, int characterY, int itemX, int itemY, int step) {
    if (step > cnt_min_step)
        return;
    if (characterX == itemX && characterY == itemY) {
        cnt_min_step = min(cnt_min_step, step);
        return;
    }

    for (int i = 0; i < 4; i++) {
        int x = characterX + dx[i];
        int y = characterY + dy[i];
        if (area[x][y] == 1) {
            area[x][y] = 0;// ���� ��ġ�� �� �湮�ϴ� ��츦 ����
            dfs(x, y, itemX, itemY, step + 1);
            area[x][y] = 1;// ���� �б⸦ �� Ž���Ѱ�� ���ο� �б� Ž���� ���� ��Ʈ��ŷ�� ����
        }
    }
    return;

}


int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {

    int answer = 0;
    // ��ǥ�� �״�� �簢���� �׸��� �Ǹ� ���ĺ��̴� ��찡 ���� ������ 2��� ������ �����Ͽ� ������ �׷���

    characterX *= 2, characterY *= 2, itemX *= 2, itemY *= 2;




    for (int i = 0; i < rectangle.size(); i++) {
        for (int a = rectangle[i][0] * 2; a <= rectangle[i][2] * 2; a++) {
            for (int b = rectangle[i][1] * 2; b <= rectangle[i][3] * 2; b++) {
                area[a][b] = 1;
            }


        }
    }
    for (int i = 0; i < rectangle.size(); i++) {
        for (int a = rectangle[i][0] * 2 + 1; a <= rectangle[i][2] * 2 - 1; a++) {
            for (int b = rectangle[i][1] * 2 + 1; b <= rectangle[i][3] * 2 - 1; b++) {
                area[a][b] = 0;
            }


        }
    }

    /*
    for (int i=0;i<100;i++) {
        for (int j=0; j<100;j++) {
            cout << area[i][j] << " ";
        }
        cout << endl;
    }
    */

    dfs(characterX, characterY, itemX, itemY, 0);

    return answer = cnt_min_step / 2;
}