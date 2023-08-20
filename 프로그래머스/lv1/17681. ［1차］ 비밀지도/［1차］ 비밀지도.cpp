#include <string>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

vector<int> function(int a, int n)
{
    vector<int> sum = {};
    for (int i = n - 1; i >= 0; i--)
    {
        if (a / pow(2, i) >= 1)
        {
            sum.push_back(1);
            a = a - pow(2, i);
        }
        else
        {
            sum.push_back(0);
        }
    }
    return sum;
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer(n, "");// 이부분 때문에 오래걸림 - 초기화 잘하기
    vector<vector<int>> parr1 = {};
    vector<vector<int>> parr2 = {};
    //arr1 = [9, 20, 28, 18, 11] arr2 = [30, 1, 21, 17, 28]
    for (int i = 0; i < n; i++)
    {
        int a = arr1[i];
        int b = arr2[i];
        parr1.push_back(function(a, n));
        parr2.push_back(function(b, n));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (parr1[i][j] == 1 || parr2[i][j] == 1)
            {
                answer[i].push_back('#');
            }
            else
            {
                answer[i].push_back(' ');
            }
        }
    }
    return answer;
}