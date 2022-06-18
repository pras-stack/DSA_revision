APPROACH 1 : Using Sorting ( Merge Sort) 
T.C. -> O(N Log N)
  
 #include <bits/stdc++.h>

using namespace std;

int kthLargest(int arr[], int n, int k) // Function to return k'th smallest element in a given array
{
    sort(arr, arr+n);   // Sort the given array
    
    return arr[k + 1];  // Return k'th element in the sorted array
}

int main()
{
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th largest element is " << kthLargest(arr, n, k);
    return 0;
}


APPROACH 2 : Using Max Heap

T.C. -> O(N) + O(KLogN)
  
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int>pq(nums.begin(), nums.end());  // creating prio queue
        int ans =0;
        while(k--)
        {
            ans = pq.top();
            pq.pop();
        }
        
        return ans;
        
    }
};
