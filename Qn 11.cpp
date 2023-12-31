#include <iostream>
using namespace std;

int BinarySearch(int arr[], int num, int low, int high)
{
 int mid;
 if (low > high)
 {
  cout << "Number is not found";
  return 0; 
 } 
 else 
 {
  mid = (low + high) / 2;
  if(arr[mid] == num)
  {
   cout << "Number is found at " << mid << " index \n";
   return 0;
  } 
  else if (num > arr[mid])
  {
   BinarySearch (arr, num, mid+1, high);
  } 
  else if (num < arr[mid]) 
  { 
   BinarySearch (arr, num, low, mid-1);
  }
 }
}
int main()
{
 int arr[100], num, i,n, low, high;
 cout<<"Enter the no. of elements\n";
 cin>>n;
for(i=0;i<n;i++)
{
   cout<<"\nEnter elements in sorted order only: ";
   cin>>arr[i]; 
}
 cout <<"\nEnter a value to be search \n";
 cin >> num; 
 low = 0;
 high = n-1;
 BinarySearch (arr, num, low, high);
}
