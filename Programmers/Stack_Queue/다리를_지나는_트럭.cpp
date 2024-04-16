#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

/*�ٸ��� ���̸�ŭ ť�� 0�� �ְ�(�ʱ�ܰ�) �ϳ��� ���鼭 ������� ����� ���� ��� Ʈ���� �Ѵ뾿 �����鼭 ���Ը� ���Ѵ�. ���� �񱳴� ���� �񱳺��� �߿����� ������ ť��  0������ ���� �ٸ��� �ǳʴ� Ʈ���� ������ ���ϸ� �ٸ� ���̰� �Ǵµ� while���� ���Խ� 0�̳� Ȥ�� �ǳʴ� Ʈ���� �ϳ� ������� ���ڸ��� ������ �װ��� ��� Ʈ���� �ϳ� Ȥ�� 0�� ���� ��츦 �����Ͽ� �� �� �ϳ��� ������ �ٽ� �ٸ� ���̸� �����־� ���� �Һ����� maintenance(�����ܰ�)�� �����ش�. ���� ������ ��� Ʈ���� ���� �� ť�� pop�� ����ؼ� �Ͼ�� ���ο� push�� ���� ���� ť�� �������� �����Ѵ�.*/

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int pass_num = 0;
    int cur = 0;
    int sum_weight = 0;


    queue<int>q;

    for (int i = 0; i < bridge_length; i++) {
        q.push(0);

    }
    while (!q.empty()) {
        answer++;
        sum_weight -= q.front();
        q.pop();

        if (pass_num < truck_weights.size()) {
            if (sum_weight + truck_weights[pass_num] <= weight) {
                sum_weight += truck_weights[pass_num];
                q.push(truck_weights[pass_num]);
                pass_num++;

            }
            else {
                q.push(0);
            }
        }
    }





    return answer;
}