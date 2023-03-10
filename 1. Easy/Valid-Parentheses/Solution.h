#include <string>	//std::string
#include <stack>	//std::stack

class Solution {
public:
    bool isValid(std::string s) {

        std::stack<char> pStack;
        pStack.push(0);
        size_t unmatched = 0;

        for (auto c : s)
        {
            switch(c)
            {
            case '(':
            case '{':
            case '[':
                // push to the stack
                pStack.push(c);
                unmatched++;
                break;
            case ')':
                // pop from the stack and compare
                if (pStack.top() != '(')
                {
                    return false;
                }
                pStack.pop();
                unmatched--;
                break;
            case '}':
                // pop from the stack and compare
                if (pStack.top() != '{')
                {
                    return false;
                }
                pStack.pop();
                unmatched--;
                break;
            case ']':
                // pop from the stack and compare
                if (pStack.top() != '[')
                {
                    return false;
                }
                pStack.pop();
                unmatched--;
                break;
            default:
                break;
            }
        }

        if (unmatched == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};