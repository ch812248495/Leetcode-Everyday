// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Note that an empty string is also considered valid.

#include "head.cpp"
bool isValid(string s)
{
    stack<char> S;
    bool result = true;
    for(int i = 0; i<s.size(); i++)
    {
        if(S.empty())
        {
            if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                result = false;
                break;
            }
        }
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            S.push(s[i]);
            continue;
        }
        else if(S.top() == '[' && s[i] == ']')
        {
            S.pop();
        }
        else if(S.top() == '(' && s[i] == ')')
        {
            S.pop();
        }    
        else if(S.top() == '{' && s[i] == '}')
        {
            S.pop();
        }
        else
        {
            result = false;
            break;
        }
    }
    if(!S.empty())
    {
        result = false;
    }
    return result;
}

int main()
{
    string s = "([)]";
    cout << isValid(s) << endl;
}