#include <string>
#include <vector>
#include <algorithm>
#include <queue>

//�۾��� ��û���� ������� �ɸ� �ð��� ����� ���� ���� �� �ִ� �����, �ҿ�ð��� ª���ͺ��� ó���ϴ� ��
//jobs�� ��û �ð��� �������� ������������ �����ϰ� �ҿ�ð� ������������ �켱���� ť�� �־��ָ� �ȴ�.
//�ϳ��� �۾� ��û�� �������� �� �� ��û ������ ���� ��û�� ��û ������ Ȯ���ϰ� ���� ���� ��û�� �۾� �ҿ� �ð� ���� ������ �ִ� ��� �켱���� ť�� �־��־� ����ϰ� �ϴ� ���� 


using namespace std;

bool compare1(const vector<int>& a, const vector<int>& b) {
    return a[0] < b[0];
}

struct compare2 {
    bool operator()(vector<int>& a, vector<int>& b) {
        return a[1] > b[1]; // ���� ������ ù��° ���ڰ� �ƴ� �ι�° ���� ������. ���� �������� ������.
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
            //&&�������� �ǿ����� 2���� ���� ���� time_cnt>=jobs[jobs_cnt][0]�� ���� ���� �Ǹ� ���� ������ ���
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
            // ������� �۾��� ������ ���� ������ �۾��� �ٷ� ������ �� �ִ� �����̹Ƿ� ���� �ð��� �ش� �۾��� ���� �������� �ٲ۴�.
            // ��: ����ð��� 3�̶�� �����Ҷ� ���� ��û�� [5,9]�� ��� ����ð��� �ش� ��û�� ����������� �ٲٰ� while���� �ٽ� ������Ѿ���
            time_cnt = jobs[jobs_cnt][0];
        }


    }
    int answer = jobs_time_cnt / jobs_cnt;

    return answer;
}




//������ ����
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