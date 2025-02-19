#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_set>


using namespace std;

bool isprime(int n) {
    if (n == 0 || n == 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    unordered_set<int> checker;

    sort(numbers.begin(), numbers.end());

    do {
        for (int i = 0; i < numbers.size(); i++) {
            int check = stoi(numbers.substr(0, i + 1));

            if (isprime(check))
                checker.insert(check);
        }

    } while (next_permutation(numbers.begin(), numbers.end()));

    for (auto num : checker)
    {
        cout << num << endl;
    }
    answer = checker.size();
    return answer;
}