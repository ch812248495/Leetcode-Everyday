// Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

// Example 1:

// Input: "babad"
// Output: "bab"
// Note: "aba" is also a valid answer.
// Example 2:

// Input: "cbbd"
// Output: "bb"

#include "head.cpp"
bool f(string s,int left,int right)
{
    if(left < 0)
        return false;
    while(left <= right)
    {
        if(s[left] == s[right])
        {
            left++;
            right--;
        }
        else
            return false;
    }
    return true;
}


int longestPalindrome(string s)
{    
    if(s.size() == 1)
        return 1;
    int result = 1;
    for(int i = 1; i < s.size(); i++)
    {
        if(f(s, i-result, i))
            result++;
        else if(f(s, i-result-1, i))
            result += 2;
    }
    return result;
}

int main()
{
    string s = "abbc";
    cout << longestPalindrome(s) << endl;
    string a = "ababbabcba";
    cout << longestPalindrome(s) << endl;
}