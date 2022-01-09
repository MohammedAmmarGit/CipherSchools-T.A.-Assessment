#include <iostream>
using namespace std;
 
// Function to get Closest number
int getClosestNo(int nums[], int x,int size)
{
    
    int closestSum;
   
    for (int i = 0; i < size ; i++) 
    {
        for(int j =i + 1; j < size; j++)
        {
            for(int k =j + 1; k < size; k++)
            {
               
                if(abs(x - closestSum) > abs(x - (nums[i] + nums[j] + nums[k])))
                    closestSum = (nums[i] + nums[j] + nums[k]);
            } 
        }
    }
    // Return the closest sum found
    return closestSum;
}
 
// Main Funtion
int main()
{
    int nums[] = { -1, 2, 1, -4 };
    int target = 1;
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << getClosestNo(nums, target,size);
 
    return 0;
}
