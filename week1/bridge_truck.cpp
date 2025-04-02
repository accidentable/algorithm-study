#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> q;
    for(int i=0; i<bridge_length; i++) q.push(0);
    q.pop();
    q.push(truck_weights.front());
    int curr_weight = q.back();
    truck_weights.erase(truck_weights.begin());
    int time = 1;

    while(truck_weights.size()!=0)
    {
        if(q.front()!=0) curr_weight-=q.front();
        q.pop();
        if(curr_weight + truck_weights.front()>weight )
        {
            q.push(0);
        }
        else
        {
            q.push(truck_weights.front());
            curr_weight+= q.back();
            truck_weights.erase(truck_weights.begin());
        }
        time++;
    }

    while(!q.empty())
    {
        q.pop();
        time++;
    }
    answer = time;
    return answer;
}
