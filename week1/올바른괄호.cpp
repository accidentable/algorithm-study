#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    stack<char> mystack;

    for (char ch : s) {
        if (ch == '(') {
            mystack.push(ch);
        } else if (ch == ')') {
            if (mystack.empty()) {
                return false;
            }
            mystack.pop();  
        }
    }

    return mystack.empty();  
}
