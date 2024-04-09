#include string
#include vector
#include algorithm
#include iostream

using namespace std;

long long solution(int n, vectorint times) {
    long long answer = 0;
    sort(times.begin(), times.end());


    long long min = 1;
    long long max = n(long long)times.back();

    while (min = max) {

        long long search = (min + max)2;
        long long people = 0;

        for (int i = 0; itimes.size(); i++) {
            people += (search(long long)times[i]);

        }
        if (people = n) {
            max = search - 1;
            answer = search;

        }
        else {
            min = search + 1;
        }


    }





    return answer;
}