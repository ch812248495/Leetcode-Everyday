// Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

// Example:

// Given array nums = [-1, 2, 1, -4], and target = 1.

// The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

#include "head.cpp"
int threeSumClosest(vector<int>& nums, int target)
{
    sort(nums.begin(), nums.end());
    int sum = nums[0] + nums[1] + nums[2];
    int diff = abs(target-sum);
    int result = sum;
    for(int i = 0; i<nums.size(); i++)
    {
        int T = target - nums[i];
        int left = i+1; 
        int right = nums.size()-1;
        while(left < right)
        {
            sum = nums[i]+nums[left]+nums[right];
            if(abs(sum-target) < diff)
            {
                diff = abs(target-sum);
                result = sum;
            }
            if(target > sum)
                left++;
            else if(target == sum)
            {
                diff = 0;
                result = target;
                break;
            }
            else
                right--;
        }
    }
    return result;
}

int main()
{
    vector<int> nums{-1,2,1,-4};
    cout << threeSumClosest(nums, 1);
}