// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.

// A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.



// Example:

// Input: "23"
// Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
#include "head.cpp"
vector<string> letterCombinations(string digits)
{
    vector<string> dict{"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> result{""}; //important
    vector<string> t{};
    string temp;
    int index;
    for(int i = 0; i < digits.size(); i++)
    {
        index = digits[i] - '0';
        string str = dict[index];
        for (int j = 0; j < str.size(); j++)
        {
            for(int k = 0; k < result.size(); k++)
            {
                t.push_back(result[k]+str[j]);
            }
        }
        result = t;
        t.clear();
    }
    return result;
}