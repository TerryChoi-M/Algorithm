#include <string>
#include <vector>
#include<iostream>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    //s.size() => string length
    for(int i = 0 ; i < s.size() ; i++)
    {
        int current = 1;
        for(int j = i-1; j>=0; j--)
        {
            if(s[j] != s[i])
            {
                current++;
            }
            if(s[j] == s[i])
            {
                break;
            }
        }
        cout << current << endl;
        if((current == i+1) || (i == 0))
        {
            answer.push_back(-1);
        }
        else 
            answer.push_back(current);
    }
    return answer;
}