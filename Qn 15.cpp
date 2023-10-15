//Bubble sort Recursion
#include <iostream>
using namespace std;
 
int bubbleSort(int arr[], int n)
{
  int temp,i;
    if (n == 1)
        return n;
    for (i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
          {temp=arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;}
    bubbleSort(arr, n - 1);
}
int main()
{
  int a[100],n,i;
  cout<<"Enter the no. of elements you wish to enter: ";
  cin>>n;
  for (i = 0; i < n; i++)
        {cout<<"Enter element: ";
        cin>>a[i];}
  cout<<"\n";
  bubbleSort(a, n);
  cout<<"Sorted array : \n";
  for (i = 0; i < n; i++)
      cout<<a[i]<<"\t";
  cout<<"\n";
  return 0;
}