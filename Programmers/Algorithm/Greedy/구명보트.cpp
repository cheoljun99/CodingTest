#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int n = people.size() - 1;
    sort(people.begin(), people.end(), less<int>());

    int cnt = 0;
    int i = 0;
    int total = 0;


    while (i < n) {
        if (people[i] + people[n] <= limit) {
            i++;
            n--;
            total++;
        }
        else if (people[i] + people[n] > limit) {
            total++;
            n--;
        }
    }
    if (i == n)
        total++;
    return answer = total;
}