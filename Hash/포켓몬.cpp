#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int N= nums.size()/2;
    set<int> Deduplication;
    for(int i=0;i<nums.size();i++)
    {
        Deduplication.insert(nums[i]);
    }
    if(Deduplication.size()<=N)
    {
        answer=Deduplication.size();
    }
    else
    {  
        answer=N;

    }
    
    return answer;
} 