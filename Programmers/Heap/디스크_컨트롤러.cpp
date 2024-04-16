#include <string>
#include <vector>
#include <algorithm>
#include <queue>
 
//작업의 요청부터 종료까지 걸린 시간의 평균을 가장 줄일 수 있는 방법은, 소요시간이 짧은것부터 처리하는 것
//jobs을 요청 시간을 기준으로 오름차순으로 정렬하고 소요시간 오름차순으로 우선순위 큐에 넣어주면 된다.
//하나의 작업 요청이 실행중일 때 그 요청 이후의 다음 요청의 요청 시점을 확인하고 실행 중인 요청의 작업 소요 시간 보다 이전에 있는 경우 우선순위 큐에 넣어주어 대기하게 하는 원리 


using namespace std;

bool compare1(const vector<int>& a, const vector<int>& b) {
    return a[0] < b[0];
}

struct compare2 {
    bool operator()(vector<int>& a, vector<int>& b) {
        return a[1] > b[1]; // 정렬 기준이 첫번째 인자가 아닌 두번째 인자 기준임. 따라서 오름차순 정렬임.
    }
};

int solution(vector<vector<int>> jobs) {

    sort(jobs.begin(), jobs.end(), compare1);

    priority_queue<vector<int>, vector<vector<int>>, compare2> pq;

    int time_cnt = 0;
    int jobs_cnt = 0;

    int jobs_time_cnt = 0;

    while (jobs_cnt < jobs.size() || !pq.empty()) {


        if (jobs_cnt < jobs.size() && time_cnt >= jobs[jobs_cnt][0]) {
            //&&연산자의 피연산자 2개의 순서 주의 time_cnt>=jobs[jobs_cnt][0]를 먼저 적게 되면 벡터 범위를 벗어남
            pq.push(jobs[jobs_cnt]);
            jobs_cnt++;
            continue;
        }

        if (!pq.empty()) {
            time_cnt += pq.top()[1];
            jobs_time_cnt += time_cnt - pq.top()[0];
            pq.pop();
        }
        else {
            // 대기중인 작업이 없으면 다음 순서의 작업을 바로 실행할 수 있는 상태이므로 현재 시간을 해당 작업의 시작 시점으로 바꾼다.
            // 예: 현재시간이 3이라고 가정할때 다음 요청이 [5,9]인 경우 현재시간을 해당 요청의 수행시점으로 바꾸고 while문을 다시 실행시켜야함
            time_cnt = jobs[jobs_cnt][0];
        }


    }
    int answer = jobs_time_cnt / jobs_cnt;

    return answer;
}




//유용한 도구
/*
for (const auto& inner_vec : jobs) {
    for (int value : inner_vec) {
        cout << value << " ";
    }
    cout <<endl;
}
while (!pq.empty()){
    vector<int> element = pq.top();
    pq.pop();
    cout << "[" << element[0] << ", " << element[1] << "]" << endl;

}
*/
