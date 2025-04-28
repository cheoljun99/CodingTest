#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    unordered_map<string, int> subject_scores;
    for (int i = 0; i < N; ++i) {
        string subject;
        int score;
        cin >> subject >> score;
        subject_scores[subject] = score;
    }

    vector<string> known_subjects(K);
    for (int i = 0; i < K; ++i) {
        cin >> known_subjects[i];
    }

    int known_sum = 0;
    for (const auto& subject : known_subjects) {
        known_sum += subject_scores[subject];
        subject_scores.erase(subject);
    }

    vector<int> unknown_scores;
    for (const auto& pair : subject_scores) {
        unknown_scores.push_back(pair.second);
    }

    sort(unknown_scores.begin(), unknown_scores.end());

    int subjects_to_pick = M - K;

    int min_sum = known_sum;
    for (int i = 0; i < subjects_to_pick && i < unknown_scores.size(); ++i) {
        min_sum += unknown_scores[i];
    }

    int max_sum = known_sum;
    for (int i = 0; i < subjects_to_pick && i < unknown_scores.size(); ++i) {
        max_sum += unknown_scores[unknown_scores.size() - 1 - i];
    }

    cout << min_sum << " " << max_sum << endl;

    return 0;
}
