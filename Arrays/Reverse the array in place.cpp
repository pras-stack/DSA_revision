/* Reverse the array in place (space complexity should be constant)
Input —>> 3,5,9,4,2
Output —>> 2,4,9,5,3 */

CODE : #include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {3,5,9,4,2};
    int temp;
    for(int i = 0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
