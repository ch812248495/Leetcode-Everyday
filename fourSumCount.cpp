// Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

// Note:
// Elements in a quadruplet (a,b,c,d) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
// The solution set must not contain duplicate quadruplets.
//     For example, given array S = {1 0 -1 0 -2 2}, and target = 0.

//     A solution set is:
//     (-1,  0, 0, 1)
//     (-2, -1, 1, 2)
//     (-2,  0, 0, 2)
#include "head.cpp"
#include <set>
vector<vector<int> > fourSum(vector<int> &nums, int target)
{
    set<vector<int> > res;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < int(nums.size()-3); i++)
    {
        for(int j = i+1; j < int(nums.size()-2); j++)
        {
            int left = j+1;
            int right  = nums.size()-1;
            while(left < right)
            {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if(sum == target)
                {
                    vector<int> temp{nums[i], nums[j], nums[left], nums[right]};
                    res.insert(temp);
                    left++;
                    right--;
                }
                else if(sum < target)
                {
                    left++;
                }
                else 
                    right--;
            }
        }
    }
    return vector<vector<int> >(res.begin(), res.end());
}