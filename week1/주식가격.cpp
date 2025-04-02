#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
    
    int len =prices.size();
    vector<int> answer(len);
    stack<int> mystack;
    
    
    for(int i=0; i<len; ++i){
        while(!mystack.empty()&&prices[mystack.top()]>prices[i])
        {
            int j =mystack.top();
            answer[j]=i-j;//변화한 시간 계산 후 올바른 index에 넣는과정
            mystack.pop();
        }
        mystack.push(i);
    }
    
    
     while (!mystack.empty()) {
         int idx = mystack.top();
         mystack.pop();
         answer[idx] = len-idx-1;//유지된값 : 줄어들지 않은 값의 시간 넣기
    }
    return answer;
}
