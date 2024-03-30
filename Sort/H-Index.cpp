#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
/*
h번 이상 인용된 논문의 최대값을 찾기 위해서는 h(안용 논문 수)가 작아져야 하지만 인용 논문 즉 h가 큰 것을 찾으면 h번 이상 인용된 논문의 개수가 작아지는데 둘다 h로 인해 값이 영향을 받기 때문에최대가 되는 값을 구하는 과정은

n편의 논문중 h번 이상 인용되었다는 말은 백터에 있는 값(주어진 인용 횟수)들의 최대값 이하의 모든 숫자들 중에서
백터에 있는 값들을 포함(h번 이상 인용되었을 경우)할(가장 많은) 수 있는 h(우리가 찾는 인용횟수)이면서 가장 큰 h(백터에 있는 값이 아님)를 찾는 것임
그래서 백터를 내림차순으로 정렬하고 백터의 값(인용 횟수)을 기준으로(해당 값이 h가 아님 해당 값 이하의 모든 숫자가 h가 될 수 있음)
나머지 백터의 값들을 포함하는 값 h(자기 자신 포함)을 찾아 가는데 이때 한 백터의 값(인용 횟수 즉 h값)이 기존의 구했던 가장 많이 백터값을 포함하는 값 h 보다 작을 경우 및 같을 경우, 그 이하의 값이 새로운 h가 되어야 하므로 최대값이 아니게 되어서 그 시점의 값을 h의 최대값이라 생각해야한다.


백터에 있는 값(h가 될 수 있는 값 그 값들 중 그것보다 이하의 값들이 h가 됨)을 포함 하는 수를 h라 두고 그 h값을 증가시키면서 벡터에 있는 값(h가 될 수 있는 값)을 살펴 보는데 벡터에 있는 값(h가 될 수 있는 값)이 현재 h보다 작으면 h값을 증가 시킬 수 없고 그값이 최대값이다. 
이러한 생각을 코드로 구현하면....
*/
int solution(vector<int> citations) {
    int answer = 0;

    sort(citations.begin(), citations.end(), greater<int>());

    for (int i = 0; i < citations.size(); i++) {

        if (citations[i] >= i + 1)
            answer = i + 1;
    }
    return answer;
}
/*
유용한 도구

for(auto num : citations){
        cout<<num<<endl;

}
*/
