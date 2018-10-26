// Given n non-negative integers a1, a2, ..., an , where each represents a
//  point at coordinate (i, ai). n vertical lines are drawn such that the 
//  two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which 
//  together with x-axis forms a container, such that the container contains the most water.

// Note: You may not slant the container and n is at least 2.
#include "head.cpp"

int maxArea(vector<int>& height)
{
    int result = 0;
    int left_max = 0;
    int temp_result;

    for(int i = 1; i < height.size(); i++)
    {
        for(int j = 0; j <= left_max; j++)
        {
            temp_result = min(height[i], height[j]) * (i-j);
            if(temp_result>result)
                result = temp_result;
        }
        if (height[i] > height[left_max])
            left_max = i;
    }
    return result;

}

int main()
{
    vector<int> a{1,8,6,2,5,4,8,3,7};
    cout << maxArea(a) << endl;
}