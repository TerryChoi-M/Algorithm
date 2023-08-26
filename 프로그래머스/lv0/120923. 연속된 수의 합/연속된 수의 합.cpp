#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    if (num%2 == 1)
    {
        int mid = total/num;
        int start = mid - num/2;
        answer.push_back(start);
        for(int i=0 ; i< num-1 ; i++)
        {
            start++;
            answer.push_back(start);
        }
    }
    else 
    {
        int mid = total/num;
        int start = mid - num/2 + 1;
        answer.push_back(start);
        for(int i=0 ; i< num-1 ; i++)
        {
            start++;
            answer.push_back(start);
        }
    }
    return answer;
}