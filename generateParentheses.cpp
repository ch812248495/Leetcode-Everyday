// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

// For example, given n = 3, a solution set is:

// [
//   "((()))",
//   "(()())",
//   "(())()",
//   "()(())",
//   "()()()"
// ]

#include "head.cpp"

void core(int len, int left,int right, string temp, vector<string>& s)
{
    if(len > 0)
    {
        if(left) core(len-1, left-1,right,temp+'(',s);
        if(right > left) core(len-1,left,right-1,temp+')',s);
    }
    else
    {
        s.push_back(temp);
        return;
    }

}

vector<string> generateParenthesis(int n)
{
    vector<string> s;
    core(2*n, n,n,"",s);
    return s;
}
