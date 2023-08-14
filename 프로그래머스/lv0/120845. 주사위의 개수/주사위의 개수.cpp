#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int answer = 0;
    if(n>box[0]||n>box[1]||n>box[2])
    {
        answer = 0;
    }
    else
    {
        int a = box[0]/n;
        int b = box[1]/n;
        int c = box[2]/n;
        answer = a*b*c;
    }
    return answer;
}