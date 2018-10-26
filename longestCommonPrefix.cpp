// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
#include "head.cpp"

string longestCommonPrefix(vector<string>& strs)
{
    string result;
    if(strs.size() == 0)
        return result;
    int i = 0;
    int shortest = strs[0].size();
    char s;
    for(int i = 1; i < strs.size(); i++)
    {
        if (shortest > strs[i].size())
        {
            shortest = strs[i].size();
        }
    }
    for(int i = 0; i < shortest; i++)
    {
        s = strs[0][i];
        for(int j = 1; j < strs.size(); j++)
        {
            if(strs[j][i] != s)
                return result;
        }
        result += s;
    }
    return result;
}

int main()
{
    string s = "hello";
    string a = "he";
    string b = "helabc";
    vector<string> str{s, a, b};
    cout << longestCommonPrefix(str) << endl;
}