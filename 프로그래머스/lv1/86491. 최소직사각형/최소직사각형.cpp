#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int a_prime = 0;
    int b_prime = 0;
    for(int i = 0; i < sizes.size(); i++)
    {
        if(sizes[i][0] < sizes[i][1])
        {
            int tmp = sizes[i][1];
            sizes[i][1] = sizes[i][0];
            sizes[i][0] = tmp;
        }
         if(a_prime < sizes[i][0])
        {
            a_prime = sizes[i][0];
        }
        if(b_prime < sizes[i][1])
        {
            b_prime = sizes[i][1];
        }
    }
    answer = a_prime*b_prime;
    return answer;
}