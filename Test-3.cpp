
//Question No 3 
//Assessment Test

#include <iostream>
 
using namespace std;
 
 
/*Function to return max sum such that no two elements
  are adjacent */
int FindMaxSum(int nums[], int n)
{
    int incl = nums[0];
    int excl = 0;
    int excl_new;
    int i;
 
    for (i = 1; i < n; i++)
    {
        
        excl_new = (incl > excl) ? incl : excl;
 
        
        incl = excl + nums[i];
        excl = excl_new;
    }
 
    
    return ((incl > excl) ? incl : excl);
}
 
// Main
int main()
{
    int nums[] = {1,2,3,1};
    int size = sizeof(nums)/sizeof(nums[0]);
    cout<<FindMaxSum(nums,size);
   }
