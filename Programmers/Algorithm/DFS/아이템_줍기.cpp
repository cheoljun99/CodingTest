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
            area[x][y] = 0;// 현재 위치를 재 방문하는 경우를 방지
            dfs(x, y, itemX, itemY, step + 1);
            area[x][y] = 1;// 현재 분기를 다 탐색한경우 새로운 분기 탐색을 위해 백트래킹을 적용
        }
    }
    return;

}


int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {

    int answer = 0;
    // 좌표값 그대로 사각형을 그리게 되면 겹쳐보이는 경우가 생김 때문에 2배로 값들을 증가하여 영역을 그려줌

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