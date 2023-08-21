#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) 
{
    vector<int> answer;
    vector<int> legend(k);
    for(int i = 0 ; i < score.size(); i++)
    {
        if(i<k)
        {
            legend.push_back(score[i]);
            sort(legend.rbegin(),legend.rend());
            answer.push_back(legend[i]);
        }
        if(i>=k && legend[k-1] < score[i])
        {
            legend[k-1] = score[i];
            sort(legend.rbegin(),legend.rend());
            answer.push_back(legend[k-1]);
        }
        else if(i>=k && legend[k-1] >= score[i])
            answer.push_back(legend[k-1]);
    }
    return answer;
}