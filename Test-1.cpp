//Question No 2


#include<iostream>
using namespace std;

//Function to get missing number
int getMissingNo(int *arr, int size){
   int missing_no= size;
   for(int i=0;i<size;i++){
      missing_no^= i^arr[i];
   }
   return missing_no;
}

//Main Function
int main()
{
	int arr[]= {3,0,1};
    int missedNo,n;
    n =sizeof(arr)/sizeof(arr[0]);
    missedNo = getMissingNo(arr,n);
	
	//To print missed number
    cout<<"Missed Number is : "<<missedNo<<endl;
    return 0;
}
