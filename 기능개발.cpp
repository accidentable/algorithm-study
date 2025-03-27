#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> v;
    for(int i=0; i<progresses.size(); i++)
    {
        v.push_back(((100 - progresses[i])+speeds[i]-1)/speeds[i]);
    }
    int standard = v[0];
    int cnt = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(standard < v[i]){answer.push_back(cnt); standard = v[i]; cnt = 1;}
        else cnt ++;
        if(i == v.size() - 1) answer.push_back(cnt);
    }
    return answer;
}