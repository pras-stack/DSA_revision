Approach :  (Kadane’s method)
Kadane’s method is a famous algorithm for sub array sum. In this method we just iterate once over the given input array. 
We take a current sum initially with value zero and add each element in the path. We add each element to the current sum if the previous 
current sum is not negative or otherwise we just break the continuity and update the current sum with current element.
Along with it at each position we check if the current sum is also global maximum or not and update the global maximum according to that.


/* Algorithm:
Create a variable to store global maximum. Initialise with most negative number(INT_MIN).
Create a variable to store current sum. Initialise with zero.
Run a loop from left to right over the array. If current sum has become negative then update it with value 0.
Add the current element to current sum and update the global maximum if current sum is greater than global maximum.
Return the global maximum*/

C0DE : 
#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) 
{
    int max_sum=INT_MIN;
    int cur=0;
    for(auto x:nums)
    {
        if(cur<0) cur=0;
        cur += x;
        max_sum =  max(max_sum , cur);
    }
    return max_sum;
}
int main() 
{
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<< maxSubArray(nums) <<endl;
    return 0; 
}
