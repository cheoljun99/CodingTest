#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

/*다리의 길이만큼 큐에 0을 넣고(초기단계) 하나씩 빼면서 빈공간을 만들고 이후 대기 트럭을 한대씩 넣으면서 무게를 비교한다. 길이 비교는 무게 비교보단 중요하지 않지만 큐애  0개수와 현재 다리를 건너는 트럭이 개수를 합하면 다리 길이가 되는데 while문에 진입시 0이나 혹은 건너는 트럭이 하나 사라지면 빈자리가 나오고 그곳에 대기 트럭중 하나 혹은 0을 넣을 경우를 생각하여 둘 중 하나를 넣으면 다시 다리 길이를 맞춰주어 루프 불변성의 maintenance(유지단계)를 지켜준다. 이후 마지막 대기 트럭이 들어온 후 큐의 pop이 계속해서 일어나고 새로운 push는 없다 이후 큐가 비어버리면 종료한다.*/

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