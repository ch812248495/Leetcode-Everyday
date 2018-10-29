// Given a string, find the length of the longest substring without repeating characters.

// Example 1:

// Input: "abcabcbb"
// Output: 3 
// Explanation: The answer is "abc", with the length of 3. 
// Example 2:

// Input: "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3. 
//              Note that the answer must be a substring, "pwke" is a subsequence and not a substring.


#include  "head.cpp"

int lengthOfLongestSubString(string s)
{

    vector<int> dp(256,-1);             //不能使用 dp[256] = {-1},这样只有第一个数字为-1;
    int result = 0;
    int left = 0;
    for(int i = 0; i < s.size(); i++)
    {
        cout << dp[s[i]] << endl;
        if(dp[s[i]] >= left)
        {
            left = dp[s[i]] + 1;
        }
        dp[s[i]] = i;
        cout << left << endl;
        result = max(result, i-left+1);
    }
    return result;
}

int main()
{
    string s = "au";
    cout << lengthOfLongestSubString(s) << endl;
}