// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example:

// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].
#include "head.cpp"

vector<int> twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++)
    {
        auto get = map.find(target-nums[i]);
        if(get != map.end())
        {
            vector<int> result{get->second,i};
            return result;
        }
        else
        {
            map[nums[i]] = i;
        }
    }
    vector<int> a{-1,-1};
    return a;
}

int main()
{
    vector<int> a{1,2,3,4,5};
    vector<int> result;
    result = twoSum(a, 9);
    cout << result[0] << result[1] << endl;
}