#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    
    vector<int> answer;
    vector<int> days;
    
   
    
    for(int i=0; i<progresses.size(); ++i)
    {
        int remain = ceil((100-progresses[i])/(double)speeds[i]);
        days.push_back(remain);
        
    }
    
     int MAX = days[0], cnt = 1;
    
    for(int i=1; i<days.size();++i)
    {
        if(days[i] <=MAX) cnt++;
        else
        {
            answer.push_back(cnt);
            MAX = days[i];
            cnt = 1;
        }
    }
    answer.push_back(cnt);
    
    return answer;
}
