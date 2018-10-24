// Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

// Example 1:

// Input: 121
// Output: true
// Example 2:

// Input: -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

#include "head.cpp"

bool isPalindrome(int x)
{
    if(x < 0)
        return false;
    stack<int> S;
    int temp = x;
    while(temp)
    {
        S.push(temp%10);
        temp/=10;
    }
    while(x)
    {
        if(x%10 == S.top())
        {
            S.pop();
            x /= 10;
        }
        else 
            return false;
    }
    return true;
}

int main()
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(12345) << endl;
}