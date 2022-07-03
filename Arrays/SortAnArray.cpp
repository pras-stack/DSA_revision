DUTCH NATIONAL FLAG ALGO

CODE : T.C. -> O(n)
  
#include<bits/stdc++.h> 
using namespace std;

class Solution {
  public:
  void sortColors(vector<int> &nums)
  {
      int low = 0, high = nums.size() - 1, mid = 0;
      
      while(mid <= high)
      {
          switch(nums[mid])
          {

              //if we encounter 0, increment both - low and mid. Initially, both are at 0th index
              case 0:
              swap(nums[low++], nums[mid++]);
              break;

            //simply increment mid to next position
            case 1:
            mid++;
            break;

            //swap the number at mid with high, as high should always maintain the rule
            case 2: 
            swap(nums[mid], nums[high--]);
            break;
          }
      }
  }  
};

/*
move 0s to the left and 2s to the right of the array and at the same time all the 1s 
shall be in the middle region of the array and hence the array will be sorted. 
*/

int main()
{
    Solution ss;
    vector<int> nums = {0,1,2,1,0,1,2,1,0};
    ss.sortColors(vec);
