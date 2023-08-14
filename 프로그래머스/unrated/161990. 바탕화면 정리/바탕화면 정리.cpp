#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int a_min = wallpaper.size();
    int b_min = wallpaper[0].size();
    int a_max = 0;
    int b_max = 0;
    
    for(int i = 0; i < wallpaper.size(); i++)
    {
        for(int j = 0 ; j < wallpaper[0].size() ; j++)
        {
            if(wallpaper[i][j] == '#')
            {
                if(a_min > i)
                    a_min = i;
                if(b_min > j)
                    b_min = j;
                if(a_max < i+1)
                    a_max = i+1;
                if(b_max < j+1)
                    b_max = j+1;
            }
        }
    }
    int lux = a_min;
    int luy = b_min;
    int rdx = a_max;
    int rdy = b_max;
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
    
    return answer;
}