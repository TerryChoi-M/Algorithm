#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    vector<string> words;
    stringstream ss(s);
    
    string word;
    while(getline(ss,word,' ')) //sstream에서 getline을 이렇게 쓴다
    {
        words.push_back(word);
    }
    for(int i=0;i<words.size();i++)
    {
        if(words[i] == "Z")
        {
            answer -= stoi(words[i-1]);
        }
        else
        {
            answer += stoi(words[i]);
        }
    }
    return answer;
}