#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int m = 1, cnt = 1;
    
    while(1)
    {
        bool check = false;
        string s = to_string(m);
        if(m%3 == 0)
        {
            m++;
            continue;
        }
        else
        {
            for(int i=0 ; i < s.size() ; i++)
            {
                if(s[i] =='3')
                {
                    m++;
                    check = true;
                    break;
                }
            }
        }
        if(check)
            continue;
        if(cnt == n)
            break;
        cnt++;
        m++;
    }
    return m;
}